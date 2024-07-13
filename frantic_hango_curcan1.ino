int moisture1= 0;
int moisture2= 0;

void setup()
{
     pinMode(A0,OUTPUT);
     pinMode(A1,INPUT);
     pinMode(13,OUTPUT);
     pinMode(3,OUTPUT);
     pinMode(6,INPUT);
}

void loop()
{
  	digitalWrite(3,HIGH);
  	digitalWrite(A0,HIGH);
  	moisture1=digitalRead(A1);
  	moisture2=digitalRead(6);
  	digitalWrite(13,LOW);
  
  
  	if(moisture1==LOW && moisture2==LOW)
    {
      	digitalWrite(13,HIGH);
    }
  
  	if(moisture1==HIGH && moisture2==LOW)
    {
      	digitalWrite(13,HIGH);
    }
  
  	if(moisture1==HIGH && moisture2==HIGH)
    {
      	digitalWrite(13,LOW);
    }
}