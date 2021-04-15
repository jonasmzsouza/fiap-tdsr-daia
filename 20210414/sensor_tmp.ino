#define portaTMP A0
int valor_analogico;
float temperatura;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  valor_analogico = analogRead(portaTMP);
  temperatura = 125.0*(valor_analogico-102.0)/256.0;
  Serial.println(temperatura);
  delay(300);
}