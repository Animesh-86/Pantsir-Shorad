int myGlobalVariable = 789;

void setup() {

  Serial.begin(9600);
  int myLocalVariable = 852;
  Serial.println("Printing in setup");
  Serial.println(myLocalVariable);
  Serial.println();

}

void loop() {
  int myLocalVariable = 123;
  Serial.println("Printing in loop");
  Serial.println(myGlobalVariable);
  Serial.println(myLocalVariable);
  delay(500);

}
