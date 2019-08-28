#include<Servo.h>
Servo s;
int input=A0;
int output=10;


void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(output,OUTPUT);
  s.attach(10);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value=analogRead(input);
  Serial.println("sensed moist value:");
  Serial.println(value);
  int tr=700;
  if(value>tr)
   {for(int i=0;i<180;i++)
   {
    s.write(i);
    delay(30);
    
   }
  for(int i=180;i>0;i--)
   {
    s.write(i);
    delay(30);
    
  }}
  else{
    s.write(0);
  }
  
}
