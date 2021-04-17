#define TAM 5

int tiraLed[] = {12, 10, 8, 7, 2};

void setup()
{
  for(int i = 0; i < TAM; i++)
  {
    pinMode(tiraLed[i], OUTPUT);
  }
}

void loop()
{
  for(int i = 0; i < TAM; i++)
  {
    digitalWrite(tiraLed[i], HIGH);
    delay(100);
    digitalWrite(tiraLed[i], LOW);
    delay(100);
    if(i == TAM-1)
    {
      for(int i = TAM-2; i > 0; i--)
      {
        digitalWrite(tiraLed[i], HIGH);
        delay(100);
        digitalWrite(tiraLed[i], LOW);
        delay(100);
      }
    }
  }
}
