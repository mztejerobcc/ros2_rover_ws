#include "controller/rc_pub_lib.hpp"

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<RemoteControlPublisher>());
  rclcpp::shutdown();
  return 0;
}
