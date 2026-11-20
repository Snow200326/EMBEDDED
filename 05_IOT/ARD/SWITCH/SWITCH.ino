int LED = 6;
int SWITCH = 2;
int LED = 6;
int SWITCH = ;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(SWITCH, INPUT);
  pinMode(LED2, OUTPUT);
  pinMode(SWITCH2, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int res = digitalRead(SWITCH);
  if(res == 0)
  {
    digitalWrite(LED,HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }

}
