#include <Servo.h>

Servo servo_0; // Declaration of the object to control the first servo
Servo servo_1; // Declaration of the object to control the second servo
Servo servo_2; // Declaration of the object to control the third servo
Servo servo_3; // Declaration of the object to control the fourth servo
Servo servo_4; // Declaration of the object to control the fifth servo
Servo servo_5; // Declaration of the object to control the sixth servo
Servo servo_6; // Declaration of the object to control the seventh servo

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud rate
  servo_0.attach(2); // Attach servo_0 to pin 2
  servo_1.attach(3); // Attach servo_1 to pin 3
  servo_2.attach(4); // Attach servo_2 to pin 4
  servo_3.attach(5); // Attach servo_3 to pin 5
  servo_4.attach(6); // Attach servo_4 to pin 6
  servo_5.attach(7); // Attach servo_5 to pin 7
  servo_6.attach(8); // Attach servo_6 to pin 8
}

void loop() {
  if (Serial.available() > 0) { // If data is available to read
    String input = Serial.readStringUntil('\n'); // Read the input string until a newline character
    int servoIndex = input.substring(0, 1).toInt(); // Extract the servo index (first character of the input string)
    int servoValue = input.substring(2).toInt(); // Extract the servo value (everything after the second character)
    
    switch (servoIndex) { // Based on the extracted servo index, control the corresponding servo
      case 1:
        servo_0.write(servoValue); // Move the first servo to the specified value
        break;
      case 2:
        servo_1.write(servoValue); // Move the second servo to the specified value
        break;
      case 3:
        servo_2.write(servoValue); // Move the third servo to the specified value
        break;
      case 4:
        servo_3.write(servoValue); // Move the fourth servo to the specified value
        break;
      case 5:
        servo_4.write(servoValue); // Move the fifth servo to the specified value
        servo_6.write(180 - servoValue); // Move the sixth servo to the complementary value (inverted position)
        break;
      case 6:
        servo_5.write(servoValue); // Move the sixth servo to the specified value
        break;
      default:
        // Invalid servo index, no action
        break;
    }
  }
}
