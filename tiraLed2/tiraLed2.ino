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
  for(int i = -3; i < TAM; i++)
  {
    digitalWrite(tiraLed[pasarPositivo(i)], HIGH);
    delay(100);
    digitalWrite(tiraLed[pasarPositivo(i)], LOW);
    delay(100);
  }
}

int pasarPositivo(int numero)
{
  if (numero < 0)
  {
    numero = numero * -1;
  }
  return numero;
}
