#define portaPIR 2
int valor;

void setup()
{
  //configura porta 2 como entrada de corrente elétrica
  pinMode(portaPIR, INPUT);
  //inicializa a comunicação Serial entre o arduíno e o computador
  Serial.begin(9600);
}

void loop()
{
  valor = digitalRead(portaPIR);
  if(valor == HIGH)
  {
    Serial.println((String)valor + " - Movimento detectado!");
  	//Serial.printl(valor);
  }
  else {
  	Serial.println((String)valor + " - Sem movimento!");
  }
  delay(400);
}