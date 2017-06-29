/*
  Fade

  Esse exemplo mostra como fazer um LED ligado ao pino 9
  ligar e desligar com intensidades diferentes,
  usando a função analogWrite().

  A função analogWrite() usa PWM para simular valores
  analógicos na porta de saída. Não são todas as portas
  que tem essa habilidade. Na maioria dos Arduinos as portas
  são identificadas com um "~".

  Esse código está em domínio público.

  Modificado em 20 Junho 2017
  por Thiago
 */

int led = 9;              // a porta de PWM onde vamos ligar o LED
int brilho = 0;           // intensidade/brilho do LED
int mudancaNoBrilho = 5;  // mudança de brilho entre um loop e outro

// a função de setup() roda exatamente uma vez quando ligamos o Arduino ou 
//   apertamos o botão de RESET
void setup() {
  // declarando o pino 9 como saída
  pinMode(led, OUTPUT);
}

// a função de loop roda repetidamente, para sempre
void loop() {
  // escrever o valor atual de brilho no pino 9:
  analogWrite(led, brilho);

  // atualizar o valor do brilho para ser usado no próximo loop:
  brilho = brilho + mudancaNoBrilho;

  // muda a direção do fade se o LED está completamente ligado ou desligado:
  if (brilho == 0 || brilho == 255) {
    mudancaNoBrilho = -mudancaNoBrilho;
  }
  // espera 30 millisegundos para ver o efeito do fade:
  delay(30);
}

