void setup() //configuração -- roda apenas uma vez
{
  pinMode(13, OUTPUT); //define a porta 13 como saída
  pinMode(12, OUTPUT); //define a porta 12 como saída
  pinMode(8, OUTPUT); //define a porta 8 como saída
}

void loop()
{
  digitalWrite(13, HIGH); //ligar a porta 13
  delay(3000); // espera 3 segundo
  digitalWrite(13, LOW); //desliga a porta 13
  delay(1000); // espera 1 segundo

  digitalWrite(12, HIGH); //ligar a porta 12
  delay(3000); // espera 3 segundo
  digitalWrite(12, LOW); //desliga a porta 12
  delay(1000); // espera 1 segundo

  digitalWrite(8, HIGH); //ligar a porta 8
  delay(3000); // espera 3 segundo
  digitalWrite(8, LOW); //desliga a porta 8
  delay(1000); // espera 1 segundo
}