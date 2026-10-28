FPGA BASED ROBOTIC ARM

This is project to implement a robotic arm by inverse kinematics powered by cordic accelerator.

The first stage was to create a riscv 32 bit processor memory mapped. Which i created.
I followed bruno levy and onur multu to create this.

Next implemented the servo as memory mapped and controlled the servo using pwm.
The instuctions is being generated from c program using gnu tools and loaded to bram.

Next im studying and going to implement the cordic accelerator and the full inverse kinematics of the arm.
The 3d print are taken from opensource cad files.

The FPGA used in icebreaker fpga.

SERVO V1 video
https://youtu.be/h5vo0ar68hQ
