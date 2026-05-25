# Prompt 1:


 - Data is sent from rover to desktop -> Done: Communication between desktop and rover works.
   The desktop reads inputs from remote control and sends to rover and the rover sends onboard sensor data back to the desktop.
 - Rover data is visualized on desktop (main goal is for plotting position as a point on a
2D map, but I will add other vehicle states depending on how smoothly it goes) -> Done (with a problem): The visualization works and I have state estimators for
imu data and wheel encoder data, however the visualizer that I use does not interperet the data in the way that I had anticipated, making
it not representative of what I am actually trying to visualize.
 - Convert current embedded firmware from C to organized Object Oriented C++ code
(less of a priority but it would be nice to do) -> Cut

# Prompt 2:

- In my data processor, I am receiving data processing it and sending estimated states without controlling the workflow.
  For better practice, I should implement a method such as mutex to make sure that I am not accessing old data when new data is available.
- I did not do a great job with consistency between types such as doubles and floats or char arrays and strings.
- I only implemented one test for this project, which I understand is not good practice.

# Prompt 3:

- Technical: I became comfortable with ROS publishers and subscribers as well as the eigen library for matrix operations.
- Design: Having libraries for objects made publisher and subscriber nodes much easier to follow. I also got to use a shared pointer
  for my data processor.
- Process: I was a lot more comfortable with interpreting error messages than I havee been in the past. Using git commands and features
  such as branches and pull requests was also very nice to get more comfortable with.

# Prompt 4:

I need to fix issues with how I publish x, y, and yaw data to my visualizer. The Foxglove visualizer that I used uses quaternions for
rotating object around the map's center point rather than the objects center point. I was also dealing with pretty bad latency while using
this visualizer.

# Prompt 5:

The git commands have become easy to use but I did run into a couple of merge issues during pull requests which were confusing to deal with.
If I were collaborating with another developer, I would probably stick to having my branch and their branch instead of a branch for each feature
as I always ended up editing other parts of the code instead of sticking to just working on a specific feature that my branch name had.

# Prompt 6:

For this project, I mostly used AI to help me work with parts of my project that relied on a lot of documentation. The two specific occasions
were the USB serial communication with termios and publishing to a specific ros2 topic for my visualizer. In both ocasions, I had to read the
documentation myself in order to confirm what the AI had provided me. I also used AI to help me write the ```MultiThreadedExecutor``` in 
```data_main``` to run the publisher and subscriber from the same executable file. Appart from this, I used AI for help debugging
by pasting error messages if I came across something that I did not know how to deal with. 

