 //Button variables start at 0 to be off
  int buttonB = 0;
  int buttonE = 0;
  int buttonN = 0;
  int randomNumber;
 //button state vars
  int buttonStateB = 0;
  int buttonStateE = 0;
  int buttonStateN = 0;


void setup() {
  Serial.begin(9600);
  //Busy Board for 4 letters by Nate Jalbert 2019
  //Letter B
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  //Letter E
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  //Letter N
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);

  //B Button
  pinMode(5, INPUT);
  //E Button
  pinMode(4, INPUT);
  //N Button
  pinMode(3, INPUT);
  
  //generate random seed
  randomSeed(analogRead(0));
}

void inputReset(){
  buttonStateB = digitalRead(5);
  buttonStateE = digitalRead(4);
  buttonStateN = digitalRead(3);
  
  if (buttonStateB == LOW) {
    buttonB = 0;
    Serial.print("Button B Pressed");
    Serial.print('\n');
    Serial.print("Button B: ");
    Serial.print(buttonB);
    Serial.print('\n');
    delay(200);
  }

  if (buttonStateE == LOW) {
    buttonE = 0;
    Serial.print("Button E Pressed");
    Serial.print('\n');
    Serial.print("Button E: ");
      Serial.print(buttonE);
      Serial.print('\n');
    delay(200);
  }

  if (buttonStateN == LOW) {
    buttonN = 0;
    Serial.print("Button N Pressed");
    Serial.print('\n');
    Serial.print("Button N: ");
      Serial.print(buttonN);
      Serial.print('\n');
    delay(200);
  }

  
}


void letterB(){
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
}

void letterE(){
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
}

void letterN(){
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
}


void letterBoff(){
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
}

void letterEoff(){
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
}

void letterNoff(){
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
}


void LightShow1(){
inputReset();

int i = 0;
for (i = 0; i < 5; i++){
delay(100);
letterBoff();
letterEoff();
letterNoff();
delay(100);
letterB();
letterEoff();
letterNoff();
delay(100);
letterBoff();
letterE();
letterNoff();
delay(100);
letterBoff();
letterEoff();
letterN();
delay(100);
letterBoff();
letterEoff();
letterNoff();
delay(200);
letterB();
letterE();
letterN();
delay(2000);
buttonB=0;
buttonE=0;
buttonN=0;  
}
}

void lightShow2(){
inputReset();

int i = 0;
for (i = 0; i < 5; i++){
delay(100);
letterBoff();
letterEoff();
letterNoff();
delay(100);
letterBoff();
letterEoff();
letterN();
delay(100);
letterBoff();
letterE();
letterNoff();
delay(100);
letterB();
letterEoff();
letterNoff();
delay(100);
letterBoff();
letterEoff();
letterNoff();
delay(200);
letterB();
letterE();
letterN();
delay(2000);
buttonB=0;
buttonE=0;
buttonN=0;  
}
}

void lightShow3(){
inputReset();

int i = 0;
for (i = 0; i < 5; i++){
delay(100);
letterBoff();
letterEoff();
letterNoff();
delay(100);
letterBoff();
letterE();
letterNoff();
delay(100);
letterB();
letterEoff();
letterN();
delay(100);
letterBoff();
letterE();
letterNoff();
delay(100);
letterBoff();
letterEoff();
letterNoff();
delay(200);
letterB();
letterE();
letterN();
delay(2000);
buttonB=0;
buttonE=0;
buttonN=0;  
}
}





void loop() {
  buttonStateB = digitalRead(5);
  buttonStateE = digitalRead(4);
  buttonStateN = digitalRead(3);
 if ((buttonStateB == LOW) || (buttonStateE == LOW) || (buttonStateN == LOW)){
  if (buttonStateB == LOW) {
    buttonB = 1;
    Serial.print("Button B Pressed");
    Serial.print('\n');
    Serial.print("Button B: ");
    Serial.print(buttonB);
    Serial.print('\n');
    //delay(200);
  }

  if (buttonStateE == LOW) {
    buttonE = 1;
    Serial.print("Button E Pressed");
    Serial.print('\n');
    Serial.print("Button E: ");
      Serial.print(buttonE);
      Serial.print('\n');
    //delay(200);
  }

  if (buttonStateN == LOW) {
    buttonN = 1;
    Serial.print("Button N Pressed");
    Serial.print('\n');
    Serial.print("Button N: ");
      Serial.print(buttonN);
      Serial.print('\n');
    //delay(200);
  }

  
 if (buttonB == 0 && buttonE == 0 && buttonN == 0){
  //Serial.print("_ _ _ ");
  letterBoff();
  letterEoff();
  letterNoff();
  
 }
if (buttonB == 0 && buttonE == 0 && buttonN == 1){
  //Serial.print("_ _ N");
  letterBoff();
  letterEoff();
  letterN();
  
 }

 if (buttonB == 0 && buttonE == 1 && buttonN == 0){
  //Serial.print("_ E_");
  letterBoff();
  letterE();
  letterNoff();
  
 }
 if (buttonB == 0 && buttonE == 1 && buttonN == 1){
  //Serial.print("_ E N ");
  letterBoff();
  letterE();
  letterN();
  
 }

  if (buttonB == 1 && buttonE == 0 && buttonN == 0){
  //Serial.print("B _ _ ");
  letterB();
  letterEoff();
  letterNoff();
  
 }

  if (buttonB == 1 && buttonE == 0 && buttonN == 1){
  //Serial.print("B _ N ");
  letterB();
  letterEoff();
  letterN();
  
 }
  if (buttonB == 1 && buttonE == 1 && buttonN == 0){
  //Serial.print("BE _ ");
  letterB();
  letterE();
  letterNoff();
  
 }
  if (buttonB == 1 && buttonE == 1 && buttonN == 1){
  //Serial.print("BEN ");
   randomNumber = random(0,4);
  if (randomNumber == 1)
  {
    LightShow1();
  }
  else if (randomNumber == 2)
  {
    lightShow2();
  }
  else{
    lightShow3();
  }
  
  letterB();
  letterE();
  letterN();
  delay(2000);
  letterBoff();
  letterEoff();
  letterNoff();
  
  }
 }
 //inputReset();
}
