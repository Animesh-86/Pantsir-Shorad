#include <SoftwareSerial.h>

SoftwareSerial BTSerial(0, 1); // RX, TX

int motor1Pin1 = 5; // Motor 1 control pin 1
int motor1Pin2 = 6; // Motor 1 control pin 2
int motor2Pin1 = 9; // Motor 2 control pin 1
int motor2Pin2 = 10; // Motor 2 control pin 2

void setup() {
  Serial.begin(9600);
  BTSerial.begin(9600);

  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
}

void loop() {
  if (BTSerial.available()) {
    char command = BTSerial.read();

    // Interpret button presses
    if (command == 'F') {
      forward();
    }
    else if (command == 'B') {
      backward();
    }
    else if (command == 'L') {
      left();
    }
    else if (command == 'R') {
      right();
    }
    else if (command == 'S') {
      stop();
    }
  }
}

void forward() {
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
}

void backward() {
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
}

void left() {
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
}

void right() {
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
}

void stop() {
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, LOW);
}
