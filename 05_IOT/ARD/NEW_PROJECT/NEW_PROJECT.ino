int LED = 9;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int i=0;
  for(i;i<1024 ;i++){
    analogWrite(LED, i);
    Serial.println(i);
    delay(50);
  }

}
