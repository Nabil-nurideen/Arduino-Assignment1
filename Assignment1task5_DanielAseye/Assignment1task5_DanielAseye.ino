int ledPin = 13;
int startValue = 5;

// Function to flash the LED a specified number of times
void flashLED(int times) {
  int flash = 0;

  while (flash < times) {
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);

    flash++;
  }

}

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

  Serial.println("=== Smart Countdown Starting ===");

  int count = startValue;

  while (count > 0) {
    Serial.print("Count is: ");
    Serial.println(count);

    // Blink LED according to current counter value
    flashLED(count);

    delay(1000);
    count--;
  }

  Serial.println("=== Countdown Complete ===");
}

void loop() {
}
