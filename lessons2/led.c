int i=0;
void setup()
{
  for(i=0;i<8;i++)
  {
  	pinMode(i, OUTPUT);
  }
}
void loop()
{
  for(i=0;i<8;i++)
  {
  digitalWrite(i, HIGH);
  delay(600);
  digitalWrite(i+1, HIGH);
  delay(400);
  digitalWrite(i+2, HIGH);
  delay(200);
  digitalWrite(i, LOW);
  delay(200);
  digitalWrite(i+1, LOW);
  delay(0);
  }
}