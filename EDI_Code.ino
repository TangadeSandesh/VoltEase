
// Define the pins for the IR sensor and the relay module
const int irSensorPin = 9;
const int relayPin = 8;

// Define a variable to store the sensor value


void setup() {
  Serial.begin(9600);
  // Initialize the IR sensor and the relay module pins
  pinMode(irSensorPin, INPUT);
  pinMode(relayPin, OUTPUT);
  
  // Turn off the relay module at the beginning
  digitalWrite(relayPin, LOW);
}

void loop() {
  // Read the sensor value4
  int sensorValue = digitalRead(irSensorPin);
  Serial.println(sensorValue);
  // If the sensor detects an object, turn on the relay
  if (sensorValue == HIGH) {
    digitalWrite(relayPin, HIGH);
    Serial.println("Object Detected");
  }
  // If the sensor does not detect an object, turn off the relay
  else {
    digitalWrite(relayPin, LOW);
    Serial.println("Object Not Detected");
  }
}
