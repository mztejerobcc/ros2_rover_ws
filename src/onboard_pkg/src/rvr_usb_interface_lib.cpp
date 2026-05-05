#include "onboard_pkg/rvr_usb_interface_lib.hpp"

rvrUsbInterface::rvrUsbInterface() : device("/dev/ttyUSB0"),
                        d1(0.00), d2(0.00), d3(0.00), d4(0.00),
                        v1(0.00), v2(0.00), v3(0.00), v4(0.00),
                        ax(0.00), ay(0.00), az(0.00),
                        wx(0.00), wy(0.00), wz(0.00) {

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

rvrUsbInterface::~rvrUsbInterface() {};

void rvrUsbInterface::usbWrite(int x) {
    int len_data = snprintf(this->data_to_send, sizeof(this->data_to_send), "Test message from Mac... %d\n", x);
    std::cout << "writing to buffer: " << this->data_to_send << std::endl;
    
    if (len_data > 0) {
        write(fd, this->data_to_send, sizeof(data_to_send));
    }

}

std::string rvrUsbInterface::usbRead() {
    bool msg_start = false;
    bool msg_end = false;

    int msg_i = 0;

    while (!msg_end) {
        ssize_t bytes_read = read(fd, buffer, sizeof(buffer) - 1);
        if (bytes_read > 0) {
            buffer[bytes_read] = '\0';
            for (int i = 0; i < bytes_read; i++) {
                char c = buffer[i];

                if (c == 'd') {
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
        // return message;
    }
    return message;
}

void rvrUsbInterface::parseData(std::string line) {
    int len = line.size();
    char line_data[14][64];

    int char_index = 0;
    int data_index = -1;

    for (int i = 0; i < len; i++)  {
        char c = line[i];

        if (char_index > 63 || data_index > 13) {
            break;
        }

        if (c == 'd') {
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

    // Convert each char array to a float value

    // Not currently using this but may be useful in the future
    for (int i = 0; i < 14; i++) {
        this->rover_data[i] = strtod(line_data[i], NULL);
    }

    this->d1 = strtod(line_data[0], NULL);
    this->d2 = strtod(line_data[1], NULL);
    this->d3 = strtod(line_data[2], NULL);
    this->d4 = strtod(line_data[3], NULL);

    this->v1 = strtod(line_data[4], NULL);
    this->v2 = strtod(line_data[5], NULL);
    this->v3 = strtod(line_data[6], NULL);
    this->v4 = strtod(line_data[7], NULL);

    this->ax = strtod(line_data[8], NULL);
    this->ay = strtod(line_data[9], NULL);
    this->az = strtod(line_data[10], NULL);

    this->wx = strtod(line_data[11], NULL);
    this->wy = strtod(line_data[12], NULL);
    this->wz = strtod(line_data[13], NULL);
}

float rvrUsbInterface::getRoverData(int i) {
    return this->rover_data[i];
}

float rvrUsbInterface::getD1() {
    return this->d1;
}
float rvrUsbInterface::getD2() {
    return this->d2;
}
float rvrUsbInterface::getD3() {
    return this->d3;
}
float rvrUsbInterface::getD4() {
    return this->d4;
}

float rvrUsbInterface::getV1() {
    return this->v1;
}
float rvrUsbInterface::getV2() {
    return this->v2;
}
float rvrUsbInterface::getV3() {
    return this->v3;
}
float rvrUsbInterface::getV4() {
    return this->v4;
}

float rvrUsbInterface::getAX() {
    return this->ax;
}
float rvrUsbInterface::getAY() {
    return this->ay;
}
float rvrUsbInterface::getAZ() {
    return this->az;
}

float rvrUsbInterface::getWX() {
    return this->wx;
}
float rvrUsbInterface::getWY() {
    return this->wy;
}
float rvrUsbInterface::getWZ() {
    return this->wz;
}
