/*
  Pisca
  Liga um LED por um segundo, e depois desliga o LED por um segundo, repetidamente.

  Esse código está em domínio público.

  Modificado em 20 Junho 2017
  por Thiago
 */


// a função de setup() roda exatamente uma vez quando ligamos o Arduino ou 
//   apertamos o botão de RESET
void setup() {
  // inicializa o pino 13 como saída digital
  pinMode(13, OUTPUT);
}

// a função de loop roda repetidamente, para sempre
void loop() {
  digitalWrite(13, HIGH);   // liga o LED (HIGH a voltagem positiva)
  delay(1000);              // espera um segundo
  digitalWrite(13, LOW);    // desliga o LED colocando a voltagem para baixo (LOW)
  delay(1000);              // espera um segundo
}

