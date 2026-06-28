void setup() {
  Serial.begin(9600);
  int myAge = 21;
  float myHeight = 1.75;
   String myName = "Nabil Nurideen" ;
  bool isStudent = true;
  float gpa= 3.5;

  //Print them to Serial Monitor 
  Serial.print("My name is: ");
  Serial.println(myName); 

  Serial.print("My age is:");
  Serial.println(18);

  Serial.print("My height is:");
  Serial.print(myHeight);
  Serial.println(" meteres");

  Serial.print("My GPA is ");
  Serial.println("3.5");


  Serial.print("Am I a student?");
  Serial.println(isStudent);



}

void loop() {
  // put your main code here, to run repeatedly:
}
