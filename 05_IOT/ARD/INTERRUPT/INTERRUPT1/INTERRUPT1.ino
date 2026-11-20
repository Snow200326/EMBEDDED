int INT_PIN = 3;
int RED = 9;
int GREEN = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(RED,OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(INT_PIN,INPUT);
  // attachInterrupt(digitalPinToInterrupt(INT_PIN), INT_ISR, FALLING);
  attachInterrupt(digitalPinToInterrupt(INT_PIN), INT_ISR, RISING);
  Serial.begin(9600);
}
void INT_ISR(){
  Serial.println("Its the interrupt\n");
  digitalWrite(GREEN, HIGH);
  digitalWrite(RED, LOW);

}

void loop() {
  Serial.println("Its normal operation\n");
  digitalWrite(GREEN, LOW);
  digitalWrite(RED, HIGH);
  delay(1000);
}
