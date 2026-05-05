#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>

#include <chrono>
#include <thread>

#ifndef USB_INTERFACE_H
#define USB_INTEREFACE_H

class usbInterface {
    private:
        const char device[256]; // name of usb where device is connected
        int fd;
        struct termios tio;
        
        // Initialize maximum lengths of strings
        char buffer[256]; // total char's read at each read function called
        char data_to_send[256]; // maximum char's to send at each write function called
        char message[sizeof(buffer)]; // maximum char's read from buffer.

        const float W; // = 16e-2 m, skid steering radius 

        // Command velocities
        // velocities for each motor
        float v1;
        float v2;
        float v3;
        float v4;

        // helper for parsing usb string into each rc input
        enum state {
            IDL,
            VXL,
            VYL,
            VXR,
            VYR,
            ENCL,
            ENCR
        };
    
    public:
        usbInterface(); // constructor establishes connection to device through usb
        ~usbInterface();

        void usbWrite(int x); // writes data to device on usb (not used for rc)
        std::string usbRead(); // returns data read from usb as a string

        void parseData(std::string line); // parses a string and updates command velocities

        // getters for private member command velocities
        float getV1();
        float getV2();
        float getV3();
        float getV4();
};

#endif