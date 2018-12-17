void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

String readSerial(){
  String str = "";
  char ch;
  while(Serial.available()>0){
    ch= Serial.read();
    str.concat(ch);
    delay(10);
    }
  return str;
}

void loop() {
  String str;
  str = readSerial();
  if(str != "")
  Serial.println(str);
}
