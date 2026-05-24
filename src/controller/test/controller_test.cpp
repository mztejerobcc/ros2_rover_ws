#include <cassert>

#include "controller/usb_interface_lib.hpp"

void test_usbRead()
{
  usbInterface test_serial;

  std::cout << "Reading from USB" << std::endl;
  std::string test_line = test_serial.usbRead();
  std::cout << "test line: " << test_line << std::endl;

  assert(test_line[0] == 'c');
  std::cout << "Passed" << std::endl;

  assert(test_line[test_line.length() - 1] == '\n');
  std::cout << "Passed" << std::endl;

  std::cout << "Passed All Tests" << std::endl;
}

void test_parseData(std::string line,
    float vel_xl, float vel_yl, float vel_xr, float vel_yr,
    float enc_l, float enc_r) {
  usbInterface test_serial;

  float W = 16e-2;

  test_serial.parseData(line);

  float vxl = vel_xl * 10e-3;
  float vyr = vel_yr * 10e-3;

  // Encoder values
  float encl = enc_l * 10e-2;
  float encr = enc_r * 10e-1;

  // Convert to speed and steering inputs on vehicle
  float u_speed = vxl * encl;
  float u_steer = vyr * encr;

  // convert to wheel command velocities
  float vr = u_speed + 0.5 * W * u_steer;
  float vl = u_speed - 0.5 * W * u_steer;

  assert(test_serial.getV1() == vr);
  assert(test_serial.getV2() == vr);
  assert(test_serial.getV3() == vl);
  assert(test_serial.getV4() == vl);

  std::cout << "Passed" << std::endl;
}

void test_lines() {
    std::cout << "Test positive numbers" << std::endl;
    std::string line1 = "c:1.00:1.00:1.00:1.00:1.00:1.00\n"; 
    test_parseData(line1, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00);

    std::cout << "Test negative numbers" << std::endl;
    std::string line2 = "c:-1.00:-1.00:-1.00:-1.00:-1.00:-1.00\n"; 
    test_parseData(line1, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00);

    std::cout << "Test arbitrary numbers" << std::endl;
    std::string line3 = "c:10.00:1.1234:-33.330:0:-100:5\n";
    test_parseData(line3, 10.00, 1.1234, -33.330, 0, -100, 5);

    std::cout << "Passed All Tests" << std::endl;
}

int main() {
    test_usbRead();
    test_lines();
}
