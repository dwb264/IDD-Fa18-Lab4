# Paper Puppets

*A lab report by Devon Bain*

## Part A. Actuating DC motors

**Link to a video of your vibration motor**

[Link to video](https://youtu.be/W5VnCB5pghM)

## Part B. Actuating Servo motors

### Part 1. Connect the Servo to your breadboard

**a. Which color wires correspond to power, ground and signal?**

Power is red, ground is brown, and signal is orange.

### Part 2. Connect the Servo to your Arduino

**a. Which Arduino pin should the signal line of the servo be attached to?**

The signal line should be attached to pin 9.

**b. What aspects of the Servo code control angle or speed?**

The `pos` variable in `myservo.write(pos)` sets the angle. Speed depends on the delay within the `loop` function - a shorter delay will increase the speed.

## Part C. Integrating input and output

**Include a photo/movie of your raw circuit in action.**

[Link to video](https://youtu.be/ECv4j-4lDmg)

[Link to code](scripts/proximity-motor/proximity-motor.ino)

## Part D. Paper puppet

**a. Make a video of your proto puppet.**

[Link to video](https://youtu.be/K8z8o1mrcrQ)

## Part E. Make it your own

**a. Make a video of your final design.**

[Link to video](https://youtu.be/997gHrfDaEM)

[Link to code](scripts/arrow/arrow.ino)

**Description**

For my final design, I used the Arrow paper signal template to create an arrow that follows the position of an accelerometer. I adapted the accelerometer demo code to make the angle of the servo motor correspond to the x-position of the accelerometer. I used the map function to make x-readings of -5000 to 5000 (the approximate range of accelerometer readings when connected to the breadboard with long wires) correspond to arrow positions of 40 to 180 degrees\*. The full range of motion is shown in the video.

\*Note: The arrow's range of motion is different than expected due to construction issues with the paper signal. Instead of pointing straight up and down, it moves in a windshield-wiper-like arc. The 40-180 degree range represents the symmetrical top portion of this arc.