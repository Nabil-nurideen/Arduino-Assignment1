// Variables - change these to change how the  LED behaves
int ledPin = 13;
int onTime = 3000;
int offTime = 50;


void setup() {
  pinMode (ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Blink started");
}

void loop() {
  digitalWrite(ledPin, HIGH);
  Serial.println("LED IS ON");
  delay(onTime);
  
  digitalWrite(ledPin, LOW);
  Serial.println("LED is OFF");
  delay(offTime);

}
