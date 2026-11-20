#define red 3
#define yell 4
#define gree 5
void setup() {

  pinMode(red, OUTPUT);
  pinMode(yell, OUTPUT);
  pinMode(gree, OUTPUT);
}

void loop() {
  while (1) {
   digitalWrite(red, HIGH); 
  delay(5000);        
  digitalWrite(red, LOW);             
  digitalWrite(yell, HIGH);   
  delay(3000);    
  digitalWrite(yell, LOW);   
  digitalWrite(gree, HIGH);   
  delay(5000);     
  digitalWrite(gree, LOW);  
  }
                
}