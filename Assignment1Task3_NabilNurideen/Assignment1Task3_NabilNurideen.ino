int ledPin = 13;
void setup() {
 pinMode(ledPin, OUTPUT);
 Serial.begin(9600);
}


void blinkOnce(int waitTime) {
 digitalWrite(ledPin, HIGH);
 delay(waitTime);
 digitalWrite(ledPin, LOW);
 delay(waitTime);
}
void blinkTwice(int waitTime) {
 digitalWrite(ledPin, HIGH);
 delay(waitTime);
 digitalWrite(ledPin, LOW);
 delay(waitTime);
} 




void loop() {
   Serial.println("Fast blink");
 blinkOnce(100); 
 Serial.println("Medium blink");
 blinkOnce(400); 
 delay(2000);

 Serial.println("Fast blink");
 blinkTwice(100); 
 Serial.println("Medium blink");
 blinkTwice(300); 
}




