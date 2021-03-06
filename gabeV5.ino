 //Button variables start at 0 to be off
  int buttonG = 0;
  int buttonA = 0;
  int buttonB = 0;
  int buttonE = 0;
 //button state vars
  int buttonStateG = 0;
  int buttonStateA = 0;
  int buttonStateB = 0;
  int buttonStateE = 0;
  int randomNumber;

void setup() {
  Serial.begin(9600);
  //Busy Board for 4 letters by Nate Jalbert 2019
  //Letter G
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  //Letter A
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  //Letter B
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  //Letter E
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  //G Button
  pinMode(5, INPUT);
  //A Button
  pinMode(4, INPUT);
  //B Button
  pinMode(3, INPUT);
  //E Button
  pinMode(2, INPUT);
 //randomseed number
 randomSeed(analogRead(0));
}

void inputReset(){
  buttonStateG = digitalRead(5);
  buttonStateA = digitalRead(4);
  buttonStateB = digitalRead(3);
  buttonStateE = digitalRead(2);
  if (buttonStateG == LOW) {
    buttonG = 0;
    Serial.print("Button G Pressed");
    Serial.print('\n');
    Serial.print("Button G: ");
    Serial.print(buttonG);
    Serial.print('\n');
    delay(100);
  }

  if (buttonStateA == LOW) {
    buttonA = 0;
    Serial.print("Button A Pressed");
    Serial.print('\n');
    Serial.print("Button A: ");
      Serial.print(buttonA);
      Serial.print('\n');
    delay(100);
  }

  if (buttonStateB == LOW) {
    buttonB = 0;
    Serial.print("Button B Pressed");
    Serial.print('\n');
    Serial.print("Button B: ");
      Serial.print(buttonB);
      Serial.print('\n');
    delay(100);
  }

  if (buttonStateE == LOW) {
    buttonE = 0;
    Serial.print("Button E Pressed");
    Serial.print('\n');
    Serial.print("Button E: ");
      Serial.print(buttonE);
      Serial.print('\n');
    delay(100);
  }
}

void letterG(){
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
}

void letterA(){
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
}

void letterB(){
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
}

void letterE(){
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
}

void letterGoff(){
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
}

void letterAoff(){
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
}

void letterBoff(){
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
}

void letterEoff(){
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
}

void lightShow(){
inputReset();
int i = 0;
for (i = 0; i < 5; i++){
delay(100);
letterGoff();
letterAoff();
letterBoff();
letterEoff();
delay(100);
letterG();
letterAoff();
letterBoff();
letterEoff();
delay(100);
letterGoff();
letterA();
letterBoff();
letterEoff();
delay(100);
letterGoff();
letterAoff();
letterB();
letterEoff();
delay(100);
letterGoff();
letterAoff();
letterBoff();
letterE();
delay(100);
letterGoff();
letterAoff();
letterBoff();
letterEoff();
delay(200);
letterG();
letterA();
letterB();
letterE();
delay(2000);
buttonG=0;
buttonA=0;
buttonB=0;  
buttonE=0;
}
}

void lightShow2(){
inputReset();
int i = 0;
for (i = 0; i < 5; i++){
delay(100);
letterGoff();
letterAoff();
letterBoff();
letterEoff();
delay(100);
letterGoff();
letterAoff();
letterBoff();
letterE();
delay(100);
letterGoff();
letterAoff();
letterB();
letterEoff();
delay(100);
letterGoff();
letterA();
letterBoff();
letterEoff();
delay(100);
letterG();
letterAoff();
letterBoff();
letterEoff();
delay(100);
letterGoff();
letterAoff();
letterBoff();
letterEoff();
delay(200);
letterG();
letterA();
letterB();
letterE();
delay(2000);
buttonG=0;
buttonA=0;
buttonB=0;  
buttonE=0;
}
}

void lightShow3(){
inputReset();
int i = 0;
for (i = 0; i < 5; i++){
delay(100);
letterGoff();
letterAoff();
letterBoff();
letterEoff();
delay(100);
letterG();
letterAoff();
letterBoff();
letterEoff();
delay(100);
letterGoff();
letterAoff();
letterB();
letterEoff();
delay(100);
letterGoff();
letterA();
letterBoff();
letterEoff();
delay(100);
letterGoff();
letterAoff();
letterBoff();
letterE();
delay(100);
letterGoff();
letterAoff();
letterBoff();
letterEoff();
delay(200);
letterG();
letterA();
letterB();
letterE();
delay(2000);
buttonG=0;
buttonA=0;
buttonB=0;  
buttonE=0;
}
}

void loop() {
  buttonStateG = digitalRead(5);
  buttonStateA = digitalRead(4);
  buttonStateB = digitalRead(3);
  buttonStateE = digitalRead(2);
  if ((buttonStateG == LOW) || (buttonStateA == LOW)|| (buttonStateB == LOW) || (buttonStateE == LOW)){
  if (buttonStateG == LOW) {
    buttonG = 1;
    Serial.print("Button G Pressed");
    Serial.print('\n');
    Serial.print("Button G: ");
    Serial.print(buttonG);
    Serial.print('\n');
    //delay(100);
  }

  if (buttonStateA == LOW) {
    buttonA = 1;
    Serial.print("Button A Pressed");
    Serial.print('\n');
    Serial.print("Button A: ");
      Serial.print(buttonA);
      Serial.print('\n');
    //delay(100);
  }

  if (buttonStateB == LOW) {
    buttonB = 1;
    Serial.print("Button B Pressed");
    Serial.print('\n');
    Serial.print("Button B: ");
      Serial.print(buttonB);
      Serial.print('\n');
    //delay(100);
  }

  if (buttonStateE == LOW) {
    buttonE = 1;
    Serial.print("Button E Pressed");
    Serial.print('\n');
    Serial.print("Button E: ");
      Serial.print(buttonE);
      Serial.print('\n');
    //delay(100);
  }
 if (buttonG == 0 && buttonA == 0 && buttonB == 0 && buttonE == 0){
  //Serial.print("_ _ _ _");
  letterGoff();
  letterAoff();
  letterBoff();
  letterEoff();
 }
 if (buttonG == 0 && buttonA == 0 && buttonB == 0 && buttonE == 1){
  //Serial.print("_ _ _ E");
  letterGoff();
  letterAoff();
  letterBoff();
  letterE();
 }
 if (buttonG == 0 && buttonA == 0 && buttonB == 1 && buttonE == 0){
  //Serial.print("_ _ B _");
  letterGoff();
  letterAoff();
  letterB();
  letterEoff();
 }
 if (buttonG == 0 && buttonA == 0 && buttonB == 1 && buttonE == 1){
  //Serial.print("_ _ B E");
  letterGoff();
  letterAoff();
  letterB();
  letterE();
 }
 
 if (buttonG == 0 && buttonA == 1 && buttonB == 0 && buttonE == 0){
  //Serial.print("_ A _ _");
  letterGoff();
  letterA();
  letterBoff();
  letterEoff();
 }
 if (buttonG == 0 && buttonA == 1 && buttonB == 0 && buttonE == 1){
  //Serial.print("_ A _ E");
  letterGoff();
  letterA();
  letterBoff();
  letterE();
 }
 if (buttonG == 0 && buttonA == 1 && buttonB == 1 && buttonE == 0){
  //Serial.print("_ A B _");
  letterGoff();
  letterA();
  letterB();
  letterEoff();
 }
 if (buttonG == 0 && buttonA == 1 && buttonB == 1 && buttonE == 1){
  //Serial.print("_ A B E");
  letterGoff();
  letterA();
  letterB();
  letterE();
 }
 if (buttonG == 1 && buttonA == 0 && buttonB == 0 && buttonE == 0){
  //Serial.print("G _ _ _");
  letterG();
  letterAoff();
  letterBoff();
  letterEoff();
 }
 if (buttonG == 1 && buttonA == 0 && buttonB == 0 && buttonE == 1){
  //Serial.print("G _ _ E");
  letterG();
  letterAoff();
  letterBoff();
  letterE();
 }
 if (buttonG == 1 && buttonA == 0 && buttonB == 1 && buttonE == 0){
  //Serial.print("G _ B _");
  letterG();
  letterAoff();
  letterB();
  letterEoff();
 }
 if (buttonG == 1 && buttonA == 0 && buttonB == 1 && buttonE == 1){
  //Serial.print("G _ B E");
  letterG();
  letterAoff();
  letterB();
  letterE();
 }
 if (buttonG == 1 && buttonA == 1 && buttonB == 0 && buttonE == 0){
  //Serial.print("G A _ _");
  letterG();
  letterA();
  letterBoff();
  letterEoff();
 }
 if (buttonG == 1 && buttonA == 1 && buttonB == 0 && buttonE == 1){
  //Serial.print("GA _ E");
  letterG();
  letterA();
  letterBoff();
  letterE();
 }
 if (buttonG == 1 && buttonA == 1 && buttonB == 1 && buttonE == 0){
  //Serial.print("G A B _");
  letterG();
  letterA();
  letterB();
  letterEoff();
 }
 if (buttonG == 1 && buttonA == 1 && buttonB == 1 && buttonE == 1){
  //Serial.print("GABE");
  randomNumber = random(0,4);
  if (randomNumber == 1)
  {
    lightShow();
  }
  else if (randomNumber == 2)
  {
    lightShow2();
  }
  else{
    lightShow3();
  }
  letterG();
  letterA();
  letterB();
  letterE();
  delay(2000);
  letterGoff();
  letterAoff();
  letterBoff();
  letterEoff();
 }
 }
 //inputReset();
}
