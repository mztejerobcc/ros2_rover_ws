#include "controller/usb_interface_lib.hpp"

usbInterface::usbInterface() : device("/dev/ttyUSB0"), W(16e-2), v1(0.00), v2(0.00), v3(0.00), v4(0.00) {

    /*
    Documentation for setting up the serial communication through USB can be found here:
    https://man7.org/linux/man-pages/man3/tcsetattr.3.html
    */
    
    fd = open(device, O_RDWR | O_NOCTTY | O_NDELAY);

    while (fd == -1) {
        printf("CUSTOM ERROR MESSAGE: failed to open port\n");
        fd = open(device, O_RDWR | O_NOCTTY | O_NDELAY);
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    tcgetattr(fd, &tio); // get current settings

    cfsetispeed(&tio, B115200);
    cfsetospeed(&tio, B115200);

    tio.c_cflag |= (CLOCAL | CREAD);    // enable receiver
    tio.c_cflag &= ~CSIZE;
    tio.c_cflag |= CS8;                 // 8 data bits
    tio.c_cflag &= ~PARENB;             // no parity
    tio.c_cflag &= ~CSTOPB;             // 1 stop bit
    tio.c_cflag &= ~CRTSCTS;            // no flow control

    tio.c_lflag = 0; // raw input
    tio.c_oflag = 0;
    tio.c_iflag = 0;

    tcsetattr(fd, TCSANOW, &tio);

    std::this_thread::sleep_for(std::chrono::seconds(2));
};

usbInterface::~usbInterface() {};

void usbInterface::usbWrite(int x) {
    int len_data = snprintf(this->data_to_send, sizeof(this->data_to_send), "Test message from Mac... %d\n", x);
    std::cout << "writing to buffer: " << this->data_to_send << std::endl;
    
    if (len_data > 0) {
        write(fd, this->data_to_send, sizeof(data_to_send));
    }

}

std::string usbInterface::usbRead() {

    bool msg_start = false;
    bool msg_end = false;

    int msg_i = 0;

    while (!msg_end) {
        ssize_t bytes_read = read(fd, buffer, sizeof(buffer) - 1);
        if (bytes_read > 0) {
            buffer[bytes_read] = '\0';
            for (int i = 0; i < bytes_read; i++) {
                char c = buffer[i];
                // extended_buffer[buff_i++] = c;

                if (c == 'c') {
                    msg_start = true;
                }

                if (msg_start && msg_i < (int)sizeof(message)) {
                    message[msg_i++] = c;
                }

                if (c == '\0') {
                    continue;
                }

                if (msg_start && c == '\n') {
                    message[msg_i++] = '\0';
                    msg_i= 0;
                    msg_start = false;
                    msg_end = true;
                    break;
                }
            }
        }
        return message;
    }
    return message;
}

void usbInterface::parseData(std::string line) {
    int len = sizeof(line);

    std::cout << "line: " << line << std::endl;

    char line_data[6][64];

    int char_index = 0;
    int data_index = -1;

    for (int i = 0; i < len; i++){
        char c = line[i];

        if (char_index > 63 || data_index > 5) {
            break;
        }

        if (c == 'c') {
            continue;
        }

        if (c == '\0' || c == '\n') {
            line_data[data_index][char_index] = '\0';
            break;
        }

        if (c == ':') {
            if (data_index < 14) {
                line_data[data_index][char_index] = '\0';
                
                data_index++;
                char_index = 0;

                continue;
            }
        }

        if (data_index >= 0) {
            line_data[data_index][char_index] = c;
            char_index++;
        }
    }

    /*
    The convention for steering the rover here is that the left joystic vertical
    motion moves the rover forward and backwards and that the right joystick horizontal
    motion steers the rover left and right with skid steering.
    */

    // Convert each char array to a float value
    // Joystick values (vyl and vxr are not used)
    float vxl = strtod(line_data[0], NULL) * 10e-3;
    // float vyl = strtod(line_data[1], NULL) * 10e-3;
    // float vxr = strtod(line_data[2], NULL) * 10e-3;
    float vyr = strtod(line_data[3], NULL) * 10e-3;

    // Encoder values
    float encl = strtod(line_data[4], NULL) * 10e-3;
    float encr = strtod(line_data[5], NULL) * 10e-3;

    // Convert to speed and steering inputs on vehicle
    float u_speed = vxl * encl;
    float u_steer = vyr * encr;

    // convert to wheel command velocities
    float vr = u_speed + 0.5 * this->W * u_steer;
    float vl = u_speed - 0.5 * this->W * u_steer;

    // Update command velocity values
    this->v1 = vr;
    this->v2 = vr;
    this->v3 = vl;
    this->v4 = vl;
}

float usbInterface::getV1() {
    return this->v1;
}
float usbInterface::getV2() {
    return this->v2;
}
float usbInterface::getV3() {
    return this->v3;
}
float usbInterface::getV4() {
    return this->v4;
}