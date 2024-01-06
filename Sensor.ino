int led = 10;                
int sensor = 2; 
int buzzer = 3;             
int state = LOW;             
int val = 0;                 

void setup() {
  pinMode(led, OUTPUT);      
  pinMode(sensor, INPUT);    
         
}

void loop(){
  val = digitalRead(sensor);
  Serial.println(val);  
  if (val == HIGH) {           
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);   
    delay(100);                
    
    if (state == LOW) {
      Serial.println("Motion detected!"); 
      state = HIGH;       
    }
  } 
  else {
      digitalWrite(led, LOW);
      digitalWrite(buzzer, LOW); 
      delay(200);             
      
      if (state == HIGH){
        Serial.println("Motion stopped!");
        state = LOW;       
    }
  }
}