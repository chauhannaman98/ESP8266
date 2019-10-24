void setup() {
  pinMode(A0,INPUT);
  pinMode(D5,OUTPUT);
  Serial.begin(115200);
}

void loop() {
  Serial.println(analogRead(A0));
  if(analogRead(A0)>=600)
  digitalWrite(D5,HIGH);
  else
  digitalWrite(D5,LOW);
}     
