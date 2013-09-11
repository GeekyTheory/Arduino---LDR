/*
     Arduino LDR Barra LEDs
	
Mario Pérez Esteso
http://www.geekytheory.com
https://www.youtube.com/user/telecoreference

https://twitter.com/geekytheory

Facebook page! Join us with a LIKE!
https://www.facebook.com/geekytheory
*/

int LDR_Map = 0;
int Analog_Pin = 0;

void setup() 
{
  for(int a = 0; a<=13; a++) pinMode(a, OUTPUT);
}

void loop() 
{
  LDR_Map = map(analogRead(Analog_Pin), 0, 1023, 13,0);
  for(int i=LDR_Map; i>=0;i--) digitalWrite(i, HIGH); 
  for(int j=LDR_Map; j<=13;j++) digitalWrite(j, LOW);
}

