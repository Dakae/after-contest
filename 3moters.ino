void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(4,HIGH);
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);

analogWrite(5,255);
analogWrite(6,255);
analogWrite(9,255);

}
