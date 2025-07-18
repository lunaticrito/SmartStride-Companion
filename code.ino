
#include <SoftwareSerial.h>

// Pin definitions
const int trigPin = A1;
const int echoPin = A0;
const int motorPin = 11;
const int voiceRxPin = 8;
const int voiceTxPin = 9;
const int simRxPin = 2;
const int simTxPin = 3;

// Variables
long duration;
int distance;

// SoftwareSerial for GPS and SIM800L
SoftwareSerial voiceSerial(voiceRxPin, voiceTxPin);
SoftwareSerial simSerial(simRxPin, simTxPin);

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  voiceSerial.begin(9600);
  simSerial.begin(9600);

  // Initialize pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(motorPin, OUTPUT);

  // Welcome message
  Serial.println("System Initialized");
}

void loop() {
  // Measure distance using ultrasonic sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  // Check for obstacles
  if (distance < 50) {
    digitalWrite(motorPin, HIGH); // Turn on vibration motor
  } else {
    digitalWrite(motorPin, LOW); // Turn off vibration motor
  }

  // Handle voice commands
  if (voiceSerial.available()) {
    String command = voiceSerial.readString();
    handleVoiceCommand(command);
  }

  delay(100);
}

void handleVoiceCommand(String command) {
  if (command.indexOf("left") >= 0) {
    Serial.println("Turning left");
    // Add code to handle left turn
  } else if (command.indexOf("right") >= 0) {
    Serial.println("Turning right");
    // Add code to handle right turn
  } else if (command.indexOf("stop") >= 0) {
    Serial.println("Stopping");
    // Add code to handle stop
  }
}
