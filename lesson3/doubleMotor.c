char ch=' ';
void setup()
{
  Serial.begin(9600);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  Serial.println("ok!");
  Serial.println("Please enter the instruction:");
}

/*
Provisions
'f':means forward
'b':means back
'r':means right
'l':means left
's':means stop
*/
void loop()
{
  if(Serial.available()>0)
  {
    ch=Serial.read();
    switch(ch)
    {
      case 'f':
        digitalWrite(6,HIGH);
      	digitalWrite(7,LOW);
      	digitalWrite(8,HIGH);
        digitalWrite(9,LOW);
      	break;
      case 'b':
        digitalWrite(6,LOW);
        digitalWrite(7,HIGH);
        digitalWrite(8,LOW);
        digitalWrite(9,HIGH);
        break;
      case 'r':
        digitalWrite(6,LOW);
        digitalWrite(7,HIGH);
        digitalWrite(8,HIGH);
        digitalWrite(9,LOW);
        break;
      case 'l':
        digitalWrite(6,HIGH);
        digitalWrite(7,LOW);
        digitalWrite(8,LOW);
        digitalWrite(9,HIGH);
      	break;
      case 's':
        digitalWrite(6,HIGH);
        digitalWrite(7,HIGH);
        digitalWrite(8,HIGH);
        digitalWrite(9,HIGH);
      	break;
      default:
      	break;
    }
  }
}
