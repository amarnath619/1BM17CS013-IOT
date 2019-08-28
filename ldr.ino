int input=A0;
int ledpin=12;


void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(12,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int value=analogRead(input);
  Serial.println("sensed idr value:");
  Serial.println(value);
  int tr=990;
  if(value<tr)
   digitalWrite(ledpin,HIGH);
  else
    digitalWrite(ledpin,LOW);
}
