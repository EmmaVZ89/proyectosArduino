#define LED 11

int entrada;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(7, INPUT);
}

void loop()
{
  entrada = digitalRead(7); // 0 ---> 0v 1 --> 5v

  if(entrada == HIGH)
  {
    digitalWrite(LED, HIGH);
    //delay(3000);
  }
  else
  {
    digitalWrite(LED, LOW);
  }
}
