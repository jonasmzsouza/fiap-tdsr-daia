#define portaBuzzer 9

void setup()
{
  //Define a porta 9 como saída de corrente elétrica
  pinMode(portaBuzzer, OUTPUT);
}

void loop()
{
  tone(portaBuzzer, 1500, 100);
  delay(100);
  noTone(portaBuzzer);
  delay(100);
}