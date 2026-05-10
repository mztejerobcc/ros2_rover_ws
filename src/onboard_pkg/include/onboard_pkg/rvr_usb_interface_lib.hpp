#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>

#include <chrono>
#include <thread>

#ifndef USB_INTERFACE_H
#define USB_INTEREFACE_H

class rvrUsbInterface {
    private:
        const char device[256]; // name of usb where device is connected
        int fd;
        struct termios tio;
        
        // Initialize maximum lengths of strings
        char buffer[256]; // total char's read at each read function called
        char data_to_send[256]; // maximum char's to send at each write function called
        char message[sizeof(buffer)]; // maximum char's read from buffer.

        // Command velocities
        float cmd_v1, cmd_v2, cmd_v3, cmd_v4;

        // Rover Data
        // all data sent by rover
        float d1, d2, d3, d4;
        float v1, v2, v3, v4;
        float ax, ay, az;
        float wx, wy, wz;

        float rover_data[14];
    
    public:
        rvrUsbInterface(); // constructor establishes connection to device through usb
        ~rvrUsbInterface();

        void usbWrite(); // writes data to device on usb (not used for rc)
        std::string usbRead(); // returns data read from usb as a string

        void parseData(std::string line); // parses a string and updates the states

        // setters for private member states
        void setCmdVel(float vel1, float vel2, float vel3, float vel4);

        // getters for private member states
        float getRoverData(int i);

        float getD1();
        float getD2();
        float getD3();
        float getD4();

        float getV1();
        float getV2();
        float getV3();
        float getV4();

        float getAX();
        float getAY();
        float getAZ();

        float getWX();
        float getWY();
        float getWZ();
};

#endif