#include <Servo.h>
Servo servo;
int pos = 0;
int sensor_read;

void setup() {
  servo.attach(9);
  delay(1000);
}

void loop() {
  servo.write(0);
  sensor_read = digitalRead(7);
  if (sensor_read == 0) {
    servo.write(60);
    delay(15);
  }
}
