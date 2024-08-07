int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int button = 8;
int ledButton = 9;
int buttonPressed = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(button, INPUT);
  pinMode(ledButton, OUTPUT);
}

void loop() {
  
  if (digitalRead(button) == HIGH && buttonPressed == 0){ //Le estado do botão e corre no sentido crescente
    buttonPressed = 1;
    digitalWrite(ledButton, HIGH);
    delay(50)
  };
 if (buttonPressed == 1)
 {
  digitalWrite(ledButton, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led1, LOW);
  delay(50);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, LOW);
  delay(50);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  delay(50);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  delay(50);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  delay(50);


 };
 if (digitalRead(button) == HIGH && buttonPressed == 1){ // Le estado do botão e corre no sentido decrescente
    buttonPressed = 0;
    digitalWrite(ledButton, HIGH);
    delay(50);
  };
 if (buttonPressed == 0){
  digitalWrite(ledButton, LOW);
  digitalWrite(led1, HIGH);
  digitalWrite(led5, LOW);
  delay(50);
  digitalWrite(led2, HIGH);
  digitalWrite(led1, LOW);
  delay(50);
  digitalWrite(led3, HIGH);
  digitalWrite(led2, LOW);
  delay(50);
  digitalWrite(led4, HIGH);
  digitalWrite(led3, LOW);
  delay(50);
  digitalWrite(led5, HIGH);
  digitalWrite(led4, LOW);
  delay(50);

};
}
