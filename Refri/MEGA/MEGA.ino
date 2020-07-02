#include <SoftwareSerial.h>
SoftwareSerial ArduinoMega(10,11); // RX ,TX
int a,b,c,d,e,f,g,h;
float val;

void setup(){
  
  Serial.begin(115200);
  ArduinoMega.begin(9600);
  for (int i = 2; i <=9 ; i ++){
  pinMode(i, OUTPUT);
  digitalWrite(i, HIGH);
  Serial.println(i);
  
  }

}

void loop(){
  
  while(ArduinoMega.available()>0){
  val = ArduinoMega.parseFloat(); // mengkonversi komunikasi menjadi tipe data Float
  a = val;
  
  if(ArduinoMega.read()== '\n'){
  val = ArduinoMega.parseFloat();
  b = val;
  }
  
  if(ArduinoMega.read()== '\n'){
  val = ArduinoMega.parseFloat();
  c = val;
  }
  
  if(ArduinoMega.read()== '\n'){
  val = ArduinoMega.parseFloat();
  d = val;
  }
  
  if(ArduinoMega.read()== '\n'){
  val = ArduinoMega.parseFloat();
  e = val;
  }

  if(ArduinoMega.read()== '\n'){
  val = ArduinoMega.parseFloat();
  f = val;
  }

  if(ArduinoMega.read()== '\n'){
  val = ArduinoMega.parseFloat();
  g = val;
  }

  if(ArduinoMega.read()== '\n'){
  val = ArduinoMega.parseFloat();
  h = val;
  }
  
  
  /*Serial.println(a);
  Serial.println(b);
  Serial.println(c);
  Serial.println(d);
  Serial.println(e);
  Serial.println(f);
  Serial.println(g);
  Serial.println(h); */
  
  
/////////////////////////////////////////
  if (a  == 11){
    digitalWrite(2, LOW);
  }
  else if ( a == 10){
    digitalWrite(2, HIGH);
  }

  
  if (b == 21){
    digitalWrite(3,LOW);
  }
  else if (b == 20){
    digitalWrite(3,HIGH);
  }

  
  if (c  == 31){
    digitalWrite(4, LOW);
  }
  else if ( c == 30){
    digitalWrite(4, HIGH);
  }

  
  if (d == 41){
    digitalWrite(5,LOW);
  }
  else if (d == 40){
    digitalWrite(5,HIGH);
  }

  
  if (e  == 51){
    digitalWrite(6, LOW);
  }
  else if ( e == 50){
    digitalWrite(6, HIGH);
  }

  
  if (f == 61){
    digitalWrite(7,LOW);
  }
  else if (f == 60){
    digitalWrite(7,HIGH);
  }

  
  if (g  == 71){
    digitalWrite(8, LOW);
  }
  else if ( g == 70){
    digitalWrite(8, HIGH);
  }

  
  if (h == 81){
    digitalWrite(9,LOW);
  }
  else if (h == 80){
    digitalWrite(9,HIGH);
  }

  ///////////////////////////////////////////
}
delay(30);
}
