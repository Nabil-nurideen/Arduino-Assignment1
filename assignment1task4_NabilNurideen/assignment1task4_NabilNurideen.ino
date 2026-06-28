int ledPin = 13;
void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("=== Countdown beginning ===");

  int counter = 7;
  
  while ( counter > 0) {
    Serial.print("counter is: ");
    Serial.println( counter);


    delay(1000);
    counter = counter - 2;}

    Serial.println("Liftoff!");
   digitalWrite(ledPin, HIGH), delay(200); digitalWrite(ledPin, LOW); delay(200);
   digitalWrite(ledPin, HIGH), delay(200); digitalWrite(ledPin, LOW); delay(200);
   digitalWrite(ledPin, HIGH), delay(200); digitalWrite(ledPin, LOW); delay(200);
  }
void loop() {
  // put your main code here, to run repeatedly:

}
