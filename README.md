FPGA BASED ROBOTIC ARM

This is project to implement a robotic arm by inverse kinematics powered by cordic accelerator.

The first stage was to create a riscv 32 bit processor memory mapped. Which i created.
I followed bruno levy and onur multu to create this.

Next implemented the servo as memory mapped and controlled the servo using pwm.
The instuctions is being generated from c program using gnu tools and loaded to bram.

Next step is to implement the inverse kinematics using any mcu and make it work.
Then need to implement it on the FPGA

The FPGA used in icebreaker fpga.

SERVO V1 video
https://youtu.be/h5vo0ar68hQ
