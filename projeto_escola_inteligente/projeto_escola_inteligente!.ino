const int PIR = 2;  // Pno Digital que o PIR está plugado
const int ledVermelho = 13;

void acenderLEDAoDetectarPresenca() {
  int estadoPIR = digitalRead(PIR);  //Le o Pino Digital 2

  if (estadoPIR == HIGH) {
    digitalWrite(ledVermelho, HIGH);
  delay(1000);
    Serial.println("LED ligado");
  } else {
    digitalWrite(ledVermelho, LOW);
  delay(1000);
    Serial.println("LED apagado");
  }
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  //Fala ao programa que o pino 13 será uma saída/output
  pinMode(ledVermelho, OUTPUT);

  Serial.println("Calibrando os sensores");
  delay(10000);
  Serial.println("Censores calibrados!!!!;) Pode testar haha");
}

void loop() {
  // put your main code here, to run repeatedly:
  //As instruções no loop será somente chamada de funções
  acenderLEDAoDetectarPresenca();
}
