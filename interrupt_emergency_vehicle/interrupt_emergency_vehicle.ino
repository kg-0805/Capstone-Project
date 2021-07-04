

void setup()
{
pinMode(2, INPUT_PULLUP);
pinMode(3, INPUT_PULLUP);
pinMode(4, INPUT_PULLUP);

pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
pinMode(9, OUTPUT);
pinMode(8, OUTPUT);
pinMode(7, OUTPUT);
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);
pinMode(4, OUTPUT);
pinMode(A5, OUTPUT);
pinMode(A4, OUTPUT);
pinMode(1, OUTPUT);
pinMode(0, OUTPUT);

digitalWrite(13,LOW);
digitalWrite(12,HIGH);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);
digitalWrite(9,HIGH);
digitalWrite(8,HIGH);
digitalWrite(7,HIGH);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(4,HIGH);
digitalWrite(A5,HIGH);
digitalWrite(A4,LOW);
digitalWrite(0,HIGH);
digitalWrite(1,HIGH);


attachInterrupt(0,right,FALLING);
attachInterrupt(1,left,FALLING);

}

void loop() 
{
  int sw1=digitalRead(2); 
  int sw2=digitalRead(3); 
 

 

 
 normal();
  
 
}
 
  void right()
  {
    digitalWrite(11,LOW);
  digitalWrite(1,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(A4,HIGH);
digitalWrite(10,HIGH);
digitalWrite(9,HIGH);
digitalWrite(8,LOW);
digitalWrite(7,HIGH);

digitalWrite(0,HIGH);

digitalWrite(A5,HIGH);
digitalWrite(13,HIGH);
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
  delay(5000); 
 }
  void left()
  {
    digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(0,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
digitalWrite(10,HIGH);
digitalWrite(9,HIGH);
digitalWrite(8,LOW);
digitalWrite(7,HIGH);
digitalWrite(A4,HIGH);
digitalWrite(1,HIGH);
digitalWrite(4,HIGH);
digitalWrite(A5,HIGH);
digitalWrite(13,HIGH);
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
  delay(5000);
  }
 void normal()
 {
 digitalWrite(0,LOW);
 digitalWrite(13,HIGH);
digitalWrite(12,HIGH);
digitalWrite(11,LOW);
digitalWrite(10,HIGH);
digitalWrite(9,HIGH);
digitalWrite(8,LOW);
digitalWrite(7,HIGH);
digitalWrite(6,HIGH);
digitalWrite(5,LOW);
digitalWrite(4,HIGH);
digitalWrite(A5,HIGH);
digitalWrite(A4,HIGH);
digitalWrite(1,HIGH);
 
 
  delay(3000);
  
  digitalWrite(1,LOW);
  digitalWrite(11,LOW);
digitalWrite(12,HIGH);
digitalWrite(13,HIGH);
digitalWrite(10,HIGH);
digitalWrite(9,HIGH);
digitalWrite(8,LOW);
digitalWrite(7,HIGH);
digitalWrite(6,HIGH);
digitalWrite(5,LOW);
digitalWrite(4,HIGH);
digitalWrite(A5,HIGH);
digitalWrite(A4,HIGH);
digitalWrite(0,HIGH);

  
  delay(3000);
  
  digitalWrite(4,LOW);
  digitalWrite(13,HIGH);
digitalWrite(12,HIGH);
digitalWrite(11,LOW);
digitalWrite(10,HIGH);
digitalWrite(9,HIGH);
digitalWrite(8,LOW);
digitalWrite(7,HIGH);
digitalWrite(6,HIGH);
digitalWrite(5,LOW);
digitalWrite(A5,HIGH);
digitalWrite(A4,HIGH);
digitalWrite(0,HIGH);
digitalWrite(1,HIGH);
  
    delay(3000);
 
  digitalWrite(A5,LOW);
  digitalWrite(13,HIGH);
digitalWrite(12,HIGH);
digitalWrite(11,LOW);
digitalWrite(10,HIGH);
digitalWrite(9,HIGH);
digitalWrite(8,LOW);
digitalWrite(7,HIGH);
digitalWrite(6,HIGH);
digitalWrite(5,LOW);
digitalWrite(4,HIGH);
digitalWrite(A4,HIGH);
digitalWrite(0,HIGH);
digitalWrite(1,HIGH);
  
     delay(2000);
 
  digitalWrite(A4,LOW);
  digitalWrite(13,HIGH);
digitalWrite(12,HIGH);
digitalWrite(11,LOW);
digitalWrite(10,HIGH);
digitalWrite(9,HIGH);
digitalWrite(8,LOW);
digitalWrite(7,LOW);
digitalWrite(6,HIGH);
digitalWrite(5,HIGH);
digitalWrite(4,HIGH);
digitalWrite(A5,HIGH);
digitalWrite(0,HIGH);
digitalWrite(1,HIGH);
    delay(3000);
 
  delay(3000);
  
digitalWrite(12,HIGH);
digitalWrite(13,HIGH);
digitalWrite(11,LOW);
digitalWrite(10,HIGH);
digitalWrite(9,HIGH);
digitalWrite(8,LOW);
digitalWrite(7,HIGH);
digitalWrite(6,LOW);
digitalWrite(5,HIGH);
digitalWrite(4,HIGH);
digitalWrite(A5,HIGH);
digitalWrite(A4,LOW);
digitalWrite(0,HIGH);
digitalWrite(1,HIGH);
  
  delay(3000);
  
  digitalWrite(13,HIGH);
  
digitalWrite(12,LOW);
digitalWrite(11,LOW);
digitalWrite(10,HIGH);
digitalWrite(9,HIGH);
digitalWrite(8,HIGH);
digitalWrite(7,HIGH);
digitalWrite(6,HIGH);
digitalWrite(5,LOW);
digitalWrite(4,HIGH);
digitalWrite(A5,HIGH);
digitalWrite(A4,LOW);
digitalWrite(0,HIGH);
digitalWrite(1,HIGH);
  delay(3000);
  
  
 
   
  digitalWrite(9,HIGH);
  digitalWrite(13,LOW);
digitalWrite(12,HIGH);
digitalWrite(11,LOW);
digitalWrite(10,HIGH);

digitalWrite(8,HIGH);
digitalWrite(7,HIGH);
digitalWrite(6,HIGH);
digitalWrite(5,LOW);
digitalWrite(4,HIGH);
digitalWrite(A5,HIGH);
digitalWrite(A4,LOW);
digitalWrite(0,HIGH);
digitalWrite(1,HIGH);
  
  delay(2000);
   
  digitalWrite(5,LOW);
  digitalWrite(13,HIGH);
digitalWrite(12,HIGH);
digitalWrite(11,HIGH);
digitalWrite(10,LOW);
digitalWrite(9,HIGH);
digitalWrite(8,LOW);
digitalWrite(7,HIGH);
digitalWrite(6,HIGH);

digitalWrite(4,HIGH);
digitalWrite(A5,HIGH);
digitalWrite(A4,LOW);
digitalWrite(0,HIGH);
digitalWrite(1,HIGH);
  delay(3000);
   

   
  digitalWrite(8,LOW);
  digitalWrite(13,HIGH);
digitalWrite(12,HIGH);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);
digitalWrite(9,LOW);

digitalWrite(7,HIGH);
digitalWrite(6,HIGH);
digitalWrite(5,LOW);
digitalWrite(4,HIGH);
digitalWrite(A5,HIGH);
digitalWrite(A4,LOW);
digitalWrite(0,HIGH);
digitalWrite(1,HIGH);
 
  delay(2000);
  
  digitalWrite(6,HIGH);
  digitalWrite(13,HIGH);
digitalWrite(12,HIGH);
digitalWrite(11,LOW);
digitalWrite(10,HIGH);
digitalWrite(9,HIGH);
digitalWrite(8,LOW);
digitalWrite(7,HIGH);

digitalWrite(5,LOW);
digitalWrite(4,HIGH);
digitalWrite(A5,HIGH);
digitalWrite(A4,LOW);
digitalWrite(0,HIGH);
digitalWrite(1,HIGH);
  delay(3000);
 }
