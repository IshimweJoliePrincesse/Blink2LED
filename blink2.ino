// Pin configuration
int ledPin1 = 13; // LED 1 connected to pin 13
int ledPin2 = 12; // LED 2 connected to pin 12

void setup() {
  // Set the LED pins as OUTPUT
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  // Turn LED 1 on and LED 2 off
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
  delay(1000); // Wait for 1 second

  // Turn LED 1 off and LED 2 on
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(1000); // Wait for 1 second
}
