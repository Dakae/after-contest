int ledPIN = 0;   


void setup() {   
  Serial.begin(9600);   
  pinMode( ledPIN, OUTPUT );   
}   

String readSerial()   
{   
   String str = "";   
   char ch;   
   
    while( Serial.available() > 0 )   
    {   
      ch = Serial.read();   
      str.concat(ch);   
      delay(10);  
    }   
    return str;     
}   

void loop() {   
  String str = "";   
  str = readSerial();   
  if(str != 0){
  Serial.println(str);
  }  
}
