/* Definição de constantes simbólicas. */
#define LED_SEGURO 0
#define LED_PERIGO 1

#define MOTOR_X1 2
#define MOTOR_X2 3
#define MOTOR_X3 4
#define MOTOR_X4 5

#define MOTOR_Y1 6
#define MOTOR_Y2 7
#define MOTOR_Y3 8
#define MOTOR_Y4 9

#define MOTOR_Z1 A2
#define MOTOR_Z2 A3
#define MOTOR_Z3 A4
#define MOTOR_Z4 A5

#define FUNCIO_A 10
#define FUNCIO_B 11
#define FUNCIO_C 12
#define FUNCIO_D 13

#define BUZZER_A A0
#define MOTOR_CA A1

#define A_VELOCIDADE 4
#define B_VELOCIDADE 4
/*Variáveis globais. */
short posicaoX = 0, posicaoY = 0, posicaoZ = 0, contador; 
/* Definições de uso para as conecções do Arduíno. */
void setup() {
  pinMode(LED_SEGURO, OUTPUT);
  pinMode(LED_PERIGO, OUTPUT);
  
  pinMode(MOTOR_X1, OUTPUT);
  pinMode(MOTOR_X2, OUTPUT);
  pinMode(MOTOR_X3, OUTPUT);
  pinMode(MOTOR_X4, OUTPUT);
  
  pinMode(MOTOR_Y1, OUTPUT);
  pinMode(MOTOR_Y2, OUTPUT);
  pinMode(MOTOR_Y3, OUTPUT);
  pinMode(MOTOR_Y4, OUTPUT);
  
  pinMode(MOTOR_Z1, OUTPUT);
  pinMode(MOTOR_Z2, OUTPUT);
  pinMode(MOTOR_Z3, OUTPUT);
  pinMode(MOTOR_Z4, OUTPUT);
  
  pinMode(FUNCIO_A, INPUT);
  pinMode(FUNCIO_B, INPUT);
  pinMode(FUNCIO_C, INPUT);
  pinMode(FUNCIO_D, INPUT);

  pinMode(MOTOR_CA, OUTPUT);
  pinMode(BUZZER_A, OUTPUT);
  
  digitalWrite(LED_SEGURO, HIGH);
  digitalWrite(LED_PERIGO, LOW);
  
  digitalWrite(MOTOR_CA, LOW);
  digitalWrite(BUZZER_A, LOW);
  
  digitalWrite(MOTOR_X1, LOW);
  digitalWrite(MOTOR_X2, LOW);
  digitalWrite(MOTOR_X3, LOW);
  digitalWrite(MOTOR_X4, LOW);
  
  digitalWrite(MOTOR_Y1, LOW);
  digitalWrite(MOTOR_Y2, LOW);
  digitalWrite(MOTOR_Y3, LOW);
  digitalWrite(MOTOR_Y4, LOW);
  
  digitalWrite(MOTOR_Z1, LOW);
  digitalWrite(MOTOR_Z2, LOW);
  digitalWrite(MOTOR_Z3, LOW);
  digitalWrite(MOTOR_Z4, LOW);
}
/* Função que é repetida indefinidamente. */
void loop() {
  if (digitalRead(FUNCIO_A) == HIGH) {
    funcionalidadeA();
  }

  if (digitalRead(FUNCIO_B) == HIGH) {
    funcionalidadeB();
  }
}
/* Funcionalidades ativadas  pelos push buttons. */
/* CTISM. */
void funcionalidadeA() {
  avisoAudivelInicio();
  /* Posicionamento ao ponto inicial. */
  for (contador = 0; contador <= 310; contador++) {
    motoresXeYsentidosAeA(A_VELOCIDADE);
  }

  for (contador = 0; contador <= 146; contador++) {
    motorXsentidoA(B_VELOCIDADE);
  }
    
  ativarMotor();
  
  baixarMotor();
  /* Passa para a letra C.*/
  for (contador = 0; contador <= 228; contador++) {
    motorXsentidoB(B_VELOCIDADE);
  }
  
  for (contador = 0; contador <= 273; contador++) {
    motorYsentidoA(B_VELOCIDADE);
  }

  for (contador = 0; contador <= 228; contador++) {
    motorXsentidoA(B_VELOCIDADE);
  }
  
  subirMotor();
  /* Espaço entre letras. */
  /* Passa para a letra F. */
  for (contador = 0; contador <= 298; contador++) {
    motorXsentidoA(A_VELOCIDADE);
  }
  
  baixarMotor();
  
  for (contador = 218; contador >= 0; contador--) {
    motorXsentidoB(B_VELOCIDADE);
  }
  
  for (contador = 0; contador <= 310; contador++) {
    motorYsentidoA(B_VELOCIDADE);
  }
  
  for (contador = 180; contador >= 0; contador--) {
    motorYsentidoB(B_VELOCIDADE);
  }
  
  for (contador = 0; contador <= 218; contador++) {
    motorXsentidoA(B_VELOCIDADE);
  }
  
  subirMotor();
  /* Espaço entre letras. */
  for (contador = 0; contador <= 130; contador++) {
    motoresXeYsentidosAeB(A_VELOCIDADE);
  }
  
  for (contador = 0; contador <= 168; contador++) {
    motorXsentidoA(A_VELOCIDADE);
  }
  
  baixarMotor();
  
  for (contador = 218; contador >= 0; contador--) {
    motorXsentidoB(B_VELOCIDADE);
  }
  
  for (contador = 0; contador <= 155; contador++) {
    motorYsentidoA(B_VELOCIDADE);
  }
  
  for (contador = 0; contador <= 218; contador++) {
    motorXsentidoA(B_VELOCIDADE);
  }
  
  for (contador = 0; contador <= 155; contador++) {
    motorYsentidoA(B_VELOCIDADE);
  }
  
  for (contador = 218; contador >= 0; contador--) {
    motorXsentidoB(B_VELOCIDADE);
  }
  
  subirMotor();
  /* Espaço entre letras. */
  /* Passa para a letra M. */
  for (contador = 0; contador <= 298; contador++) {
    motorXsentidoA(A_VELOCIDADE);
  }
  
  baixarMotor();
  
  for (contador = 310; contador >= 0; contador--) {
    motorYsentidoB(B_VELOCIDADE);
  }
  
  for (contador = 0; contador <= 109; contador++) {
    motoresXeYsentidosAeA(B_VELOCIDADE);
    motorYsentidoA(B_VELOCIDADE);
  }
  
  for (contador = 0; contador <= 109; contador++) {
    motoresXeYsentidosAeB(B_VELOCIDADE);
    motorYsentidoB(B_VELOCIDADE);
  }
  
  for (contador = 0; contador <= 310; contador++) {
    motorYsentidoA(B_VELOCIDADE);
  }
  
  reinicializar();
  
  avisoAudivelFim();
}
/* UFSM ao centro. */
void funcionalidadeB() {
  avisoAudivelInicio();
  /* Posicionamento ao ponto inicial. */
  for (contador = 0; contador <= 258; contador++) {
    motoresXeYsentidosAeA(A_VELOCIDADE);
  }
  
  for (contador = 0; contador <= 70; contador++) {
    motorYsentidoA(A_VELOCIDADE);
  }
  
  ativarMotor();
  
  baixarMotor();
  /* Passa para a letra U.*/
  for (contador = 0; contador <= 280; contador++) {
    motorYsentidoA(B_VELOCIDADE);
  }
  
  for (contador = 0; contador <= 218; contador++) {
    motorXsentidoA(B_VELOCIDADE);
  }
  
  for (contador = 310; contador >= 0; contador--) {
    motorYsentidoB(B_VELOCIDADE);
  }
  
  subirMotor();
  /* Espaço entre letras. */
  /* Passa para a letra F. */
  for (contador = 0; contador <= 298; contador++) {
    motorXsentidoA(A_VELOCIDADE);
  }
  
  baixarMotor();
  
  for (contador = 218; contador >= 0; contador--) {
    motorXsentidoB(B_VELOCIDADE);
  }
  
  for (contador = 0; contador <= 310; contador++) {
    motorYsentidoA(B_VELOCIDADE);
  }
  
  for (contador = 180; contador >= 0; contador--) {
    motorYsentidoB(B_VELOCIDADE);
  }
  
  for (contador = 0; contador <= 218; contador++) {
    motorXsentidoA(B_VELOCIDADE);
  }
  
  subirMotor();
  /* Espaço entre letras. */
  for (contador = 0; contador <= 130; contador++) {
    motoresXeYsentidosAeB(A_VELOCIDADE);
  }
  
  for (contador = 0; contador <= 168; contador++) {
    motorXsentidoA(A_VELOCIDADE);
  }
  
  baixarMotor();
  
  for (contador = 218; contador >= 0; contador--) {
    motorXsentidoB(B_VELOCIDADE);
  }
  
  for (contador = 0; contador <= 155; contador++) {
    motorYsentidoA(B_VELOCIDADE);
  }
  
  for (contador = 0; contador <= 218; contador++) {
    motorXsentidoA(B_VELOCIDADE);
  }
  
  for (contador = 0; contador <= 155; contador++) {
    motorYsentidoA(B_VELOCIDADE);
  }
  
  for (contador = 218; contador >= 0; contador--) {
    motorXsentidoB(B_VELOCIDADE);
  }
  
  subirMotor();
  /* Espaço entre letras. */
  /* Passa para a letra M. */
  for (contador = 0; contador <= 298; contador++) {
    motorXsentidoA(A_VELOCIDADE);
  }
  
  baixarMotor();
  
  for (contador = 310; contador >= 0; contador--) {
    motorYsentidoB(B_VELOCIDADE);
  }
  
  for (contador = 0; contador <= 109; contador++) {
    motoresXeYsentidosAeA(B_VELOCIDADE);
  }
  
  for (contador = 0; contador <= 109; contador++) {
    motoresXeYsentidosAeB(B_VELOCIDADE);
  }
  
  for (contador = 0; contador <= 310; contador++) {
    motorYsentidoA(B_VELOCIDADE);
  }
  
  reinicializar();
  
  avisoAudivelFim();
}

/* Ativação das bobinas do motor de passo responsável pelo eixo X. */
void motorXsentidoA(short tempoEntrePulsos) {
  digitalWrite(MOTOR_X1, HIGH);
  digitalWrite(MOTOR_X2, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_X1, LOW);
  digitalWrite(MOTOR_X2, LOW);
  
  digitalWrite(MOTOR_X2, HIGH);
  digitalWrite(MOTOR_X3, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_X2, LOW);
  digitalWrite(MOTOR_X3, LOW);
  
  digitalWrite(MOTOR_X3, HIGH);
  digitalWrite(MOTOR_X4, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_X3, LOW);
  digitalWrite(MOTOR_X4, LOW);
  
  digitalWrite(MOTOR_X4, HIGH);
  digitalWrite(MOTOR_X1, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_X4, LOW);
  digitalWrite(MOTOR_X1, LOW);
  
  posicaoX++;
  
  controle();
}

void motorXsentidoB(short tempoEntrePulsos) {
  digitalWrite(MOTOR_X4, HIGH);
  digitalWrite(MOTOR_X3, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_X4, LOW);
  digitalWrite(MOTOR_X3, LOW);
  
  digitalWrite(MOTOR_X3, HIGH);
  digitalWrite(MOTOR_X2, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_X3, LOW);
  digitalWrite(MOTOR_X2, LOW);
  
  digitalWrite(MOTOR_X2, HIGH);
  digitalWrite(MOTOR_X1, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_X2, LOW);
  digitalWrite(MOTOR_X1, LOW);
  
  digitalWrite(MOTOR_X1, HIGH);
  digitalWrite(MOTOR_X4, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_X1, LOW);
  digitalWrite(MOTOR_X4, LOW);
  
  posicaoX--;
  
  controle();
}

/* Ativação das bobinas do motor de passo responsável pelo eixo Y. */
void motorYsentidoA(short tempoEntrePulsos) {
  digitalWrite(MOTOR_Y1, HIGH);
  digitalWrite(MOTOR_Y2, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_Y1, LOW);
  digitalWrite(MOTOR_Y2, LOW);
  
  digitalWrite(MOTOR_Y2, HIGH);
  digitalWrite(MOTOR_Y3, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_Y2, LOW);
  digitalWrite(MOTOR_Y3, LOW);
  
  digitalWrite(MOTOR_Y3, HIGH);
  digitalWrite(MOTOR_Y4, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_Y3, LOW);
  digitalWrite(MOTOR_Y4, LOW);
  
  digitalWrite(MOTOR_Y4, HIGH);
  digitalWrite(MOTOR_Y1, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_Y4, LOW);
  digitalWrite(MOTOR_Y1, LOW);
  
  posicaoY++;
  
  controle();
}

void motorYsentidoB(short tempoEntrePulsos) {
  digitalWrite(MOTOR_Y4, HIGH);
  digitalWrite(MOTOR_Y3, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_Y4, LOW);
  digitalWrite(MOTOR_Y3, LOW);
  
  digitalWrite(MOTOR_Y3, HIGH);
  digitalWrite(MOTOR_Y2, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_Y3, LOW);
  digitalWrite(MOTOR_Y2, LOW);
  
  digitalWrite(MOTOR_Y2, HIGH);
  digitalWrite(MOTOR_Y1, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_Y2, LOW);
  digitalWrite(MOTOR_Y1, LOW);
  
  digitalWrite(MOTOR_Y1, HIGH);
  digitalWrite(MOTOR_Y4, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_Y1, LOW);
  digitalWrite(MOTOR_Y4, LOW);
  
  posicaoY--;
  
  controle();
}

/* Ativação das bobinas do motor de passo responsável pelo eixo Z. */
void motorZsentidoA(short tempoEntrePulsos) {
  digitalWrite(MOTOR_Z1, HIGH);
  digitalWrite(MOTOR_Z2, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_Z1, LOW);
  digitalWrite(MOTOR_Z2, LOW);
  
  digitalWrite(MOTOR_Z2, HIGH);
  digitalWrite(MOTOR_Z3, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_Z2, LOW);
  digitalWrite(MOTOR_Z3, LOW);
  
  digitalWrite(MOTOR_Z3, HIGH);
  digitalWrite(MOTOR_Z4, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_Z3, LOW);
  digitalWrite(MOTOR_Z4, LOW);
  
  digitalWrite(MOTOR_Z4, HIGH);
  digitalWrite(MOTOR_Z1, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_Z4, LOW);
  digitalWrite(MOTOR_Z1, LOW);
  
  posicaoZ++;
  
  controle();
}

void motorZsentidoB(short tempoEntrePulsos) {
  digitalWrite(MOTOR_Z4, HIGH);
  digitalWrite(MOTOR_Z3, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_Z4, LOW);
  digitalWrite(MOTOR_Z3, LOW);
  
  digitalWrite(MOTOR_Z3, HIGH);
  digitalWrite(MOTOR_Z2, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_Z3, LOW);
  digitalWrite(MOTOR_Z2, LOW);
  
  digitalWrite(MOTOR_Z2, HIGH);
  digitalWrite(MOTOR_Z1, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_Z2, LOW);
  digitalWrite(MOTOR_Z1, LOW);
  
  digitalWrite(MOTOR_Z1, HIGH);
  digitalWrite(MOTOR_Z4, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_Z1, LOW);
  digitalWrite(MOTOR_Z4, LOW);
  
  posicaoZ--;
  
  controle();
}

/* Ativação das bobinas dos motores de passo responsáveis pelos eixos X e Y. */
void motoresXeYsentidosAeA(short tempoEntrePulsos) {
  digitalWrite(MOTOR_X1, HIGH);
  digitalWrite(MOTOR_X2, HIGH);
  digitalWrite(MOTOR_Y1, HIGH);
  digitalWrite(MOTOR_Y2, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_X1, LOW);
  digitalWrite(MOTOR_X2, LOW);
  digitalWrite(MOTOR_Y1, LOW);
  digitalWrite(MOTOR_Y2, LOW);
  
  digitalWrite(MOTOR_X2, HIGH);
  digitalWrite(MOTOR_X3, HIGH);
  digitalWrite(MOTOR_Y2, HIGH);
  digitalWrite(MOTOR_Y3, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_X2, LOW);
  digitalWrite(MOTOR_X3, LOW);
  digitalWrite(MOTOR_Y2, LOW);
  digitalWrite(MOTOR_Y3, LOW);
  
  digitalWrite(MOTOR_X3, HIGH);
  digitalWrite(MOTOR_X4, HIGH);
  digitalWrite(MOTOR_Y3, HIGH);
  digitalWrite(MOTOR_Y4, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_X3, LOW);
  digitalWrite(MOTOR_X4, LOW);
  digitalWrite(MOTOR_Y3, LOW);
  digitalWrite(MOTOR_Y4, LOW);
  
  digitalWrite(MOTOR_X4, HIGH);
  digitalWrite(MOTOR_X1, HIGH);
  digitalWrite(MOTOR_Y4, HIGH);
  digitalWrite(MOTOR_Y1, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_X4, LOW);
  digitalWrite(MOTOR_X1, LOW);
  digitalWrite(MOTOR_Y4, LOW);
  digitalWrite(MOTOR_Y1, LOW);
  
  posicaoX++;
  posicaoY++;
  
  controle();
}

void motoresXeYsentidosBeB(short tempoEntrePulsos) {
  digitalWrite(MOTOR_X4, HIGH);
  digitalWrite(MOTOR_X3, HIGH);
  digitalWrite(MOTOR_Y4, HIGH);
  digitalWrite(MOTOR_Y3, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_X4, LOW);
  digitalWrite(MOTOR_X3, LOW);
  digitalWrite(MOTOR_Y4, LOW);
  digitalWrite(MOTOR_Y3, LOW);
  
  digitalWrite(MOTOR_X3, HIGH);
  digitalWrite(MOTOR_X2, HIGH);
  digitalWrite(MOTOR_Y3, HIGH);
  digitalWrite(MOTOR_Y2, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_X3, LOW);
  digitalWrite(MOTOR_X2, LOW);
  digitalWrite(MOTOR_Y3, LOW);
  digitalWrite(MOTOR_Y2, LOW);
  
  digitalWrite(MOTOR_X2, HIGH);
  digitalWrite(MOTOR_X1, HIGH);
  digitalWrite(MOTOR_Y2, HIGH);
  digitalWrite(MOTOR_Y1, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_X2, LOW);
  digitalWrite(MOTOR_X1, LOW);
  digitalWrite(MOTOR_Y2, LOW);
  digitalWrite(MOTOR_Y1, LOW);
  
  digitalWrite(MOTOR_X1, HIGH);
  digitalWrite(MOTOR_X4, HIGH);
  digitalWrite(MOTOR_Y1, HIGH);
  digitalWrite(MOTOR_Y4, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_X1, LOW);
  digitalWrite(MOTOR_X4, LOW);
  digitalWrite(MOTOR_Y1, LOW);
  digitalWrite(MOTOR_Y4, LOW);
  
  posicaoX--;
  posicaoY--;
  
  controle();
}

void motoresXeYsentidosAeB(short tempoEntrePulsos) {
  digitalWrite(MOTOR_X1, HIGH);
  digitalWrite(MOTOR_X2, HIGH);
  digitalWrite(MOTOR_Y4, HIGH);
  digitalWrite(MOTOR_Y3, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_X1, LOW);
  digitalWrite(MOTOR_X2, LOW);
  digitalWrite(MOTOR_Y4, LOW);
  digitalWrite(MOTOR_Y3, LOW);
  
  digitalWrite(MOTOR_X2, HIGH);
  digitalWrite(MOTOR_X3, HIGH);
  digitalWrite(MOTOR_Y3, HIGH);
  digitalWrite(MOTOR_Y2, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_X2, LOW);
  digitalWrite(MOTOR_X3, LOW);
  digitalWrite(MOTOR_Y3, LOW);
  digitalWrite(MOTOR_Y2, LOW);
  
  digitalWrite(MOTOR_X3, HIGH);
  digitalWrite(MOTOR_X4, HIGH);
  digitalWrite(MOTOR_Y2, HIGH);
  digitalWrite(MOTOR_Y1, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_X3, LOW);
  digitalWrite(MOTOR_X4, LOW);
  digitalWrite(MOTOR_Y2, LOW);
  digitalWrite(MOTOR_Y1, LOW);
  
  digitalWrite(MOTOR_X4, HIGH);
  digitalWrite(MOTOR_X1, HIGH);
  digitalWrite(MOTOR_Y1, HIGH);
  digitalWrite(MOTOR_Y4, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_X4, LOW);
  digitalWrite(MOTOR_X1, LOW);
  digitalWrite(MOTOR_Y1, LOW);
  digitalWrite(MOTOR_Y4, LOW);
  
  posicaoX++;
  posicaoY--;
  
  controle();
}

void motoresXeYsentidosBeA(short tempoEntrePulsos) {
  digitalWrite(MOTOR_X4, HIGH);
  digitalWrite(MOTOR_X3, HIGH);
  digitalWrite(MOTOR_Y1, HIGH);
  digitalWrite(MOTOR_Y2, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_X4, LOW);
  digitalWrite(MOTOR_X3, LOW);
  digitalWrite(MOTOR_Y1, LOW);
  digitalWrite(MOTOR_Y2, LOW);
  
  digitalWrite(MOTOR_X3, HIGH);
  digitalWrite(MOTOR_X2, HIGH);
  digitalWrite(MOTOR_Y2, HIGH);
  digitalWrite(MOTOR_Y3, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_X3, LOW);
  digitalWrite(MOTOR_X2, LOW);
  digitalWrite(MOTOR_Y2, LOW);
  digitalWrite(MOTOR_Y3, LOW);
  
  digitalWrite(MOTOR_X2, HIGH);
  digitalWrite(MOTOR_X1, HIGH);
  digitalWrite(MOTOR_Y3, HIGH);
  digitalWrite(MOTOR_Y4, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_X2, LOW);
  digitalWrite(MOTOR_X1, LOW);
  digitalWrite(MOTOR_Y3, LOW);
  digitalWrite(MOTOR_Y4, LOW);
  
  digitalWrite(MOTOR_X1, HIGH);
  digitalWrite(MOTOR_X4, HIGH);
  digitalWrite(MOTOR_Y4, HIGH);
  digitalWrite(MOTOR_Y1, HIGH);
  delay(tempoEntrePulsos);
  digitalWrite(MOTOR_X1, LOW);
  digitalWrite(MOTOR_X4, LOW);
  digitalWrite(MOTOR_Y4, LOW);
  digitalWrite(MOTOR_Y1, LOW);
  
  posicaoX--;
  posicaoY++;
  
  controle();
}
/* Responsável por interromper uma funcionalidade que esta em andamento. */
void controle() {
  if (digitalRead(FUNCIO_C) == HIGH) {
    avisoAudivelPausa();
    desativarMotor();
    digitalWrite(LED_PERIGO, LOW);
    digitalWrite(LED_SEGURO, HIGH);
    while(true) {
      if (digitalRead(FUNCIO_C) == HIGH) {
        digitalWrite(LED_PERIGO, HIGH);
        digitalWrite(LED_SEGURO, LOW);
        avisoAudivelPausa();
        ativarMotor();
        break;
      } else {
        if (digitalRead(FUNCIO_D) == HIGH) {
          digitalWrite(LED_PERIGO, HIGH);
          digitalWrite(LED_SEGURO, LOW);
          avisoAudivelReinicializar();
          reinicializar();
          avisoAudivelFim();
          asm volatile("jmp 0");
        }
      }
    }
  }
}
/* Reinicializa a posição dos motores de passo. */
void reinicializar() {
  for (contador = posicaoZ; contador >= 0; contador--) {
    motorZsentidoB(A_VELOCIDADE);
  }
  
  desativarMotor();
  
  if (posicaoX < posicaoY) {
    for (contador = posicaoX; contador >= 0; contador--) {
      motoresXeYsentidosBeB(A_VELOCIDADE);
    }
    
    for (contador = posicaoY; contador >= 0; contador--) {
      motorYsentidoB(A_VELOCIDADE);
    }
  } else {
    for (contador = posicaoY; contador >= 0; contador--) {
      motoresXeYsentidosBeB(A_VELOCIDADE);
    }
    
    for (contador = posicaoX; contador >= 0; contador--) {
      motorXsentidoB(A_VELOCIDADE);
    }
  }
}

void avisoAudivelInicio() {
  digitalWrite(LED_PERIGO, HIGH);
  contador;
  for (contador = 0; contador < 5; contador++) {
    controle();
    digitalWrite(LED_PERIGO, HIGH);
    digitalWrite(BUZZER_A, HIGH);
    delay(250);
    digitalWrite(LED_PERIGO, LOW);
    digitalWrite(BUZZER_A, LOW);
    delay(750);
  }
  digitalWrite(LED_PERIGO, HIGH);
  digitalWrite(LED_SEGURO, LOW);
}

void avisoAudivelPausa() {
  digitalWrite(BUZZER_A, HIGH);
  delay(500);
  digitalWrite(BUZZER_A, LOW);
  delay(500);
}

void avisoAudivelReinicializar() {
  for (contador = 0; contador < 5; contador++) {
    digitalWrite(BUZZER_A, HIGH);
    delay(250);
    digitalWrite(BUZZER_A, LOW);
    delay(100);
  }
}

void avisoAudivelFim() {
  for (contador = 0; contador < 3; contador++) {
    digitalWrite(BUZZER_A, HIGH);
    delay(250);
    digitalWrite(BUZZER_A, LOW);
    delay(750);
  }
}

void baixarMotor() {
  for (contador = 0; contador <= 200; posicaoZ++, contador++) {
    motorZsentidoA(A_VELOCIDADE);
  }
}

void subirMotor() {
  for (contador = 0; contador <= 200; posicaoZ--, contador++) {
    motorZsentidoB(A_VELOCIDADE);
  }
}

void ativarMotor() {
  digitalWrite(MOTOR_CA, HIGH);
  delay(3000);
}

void desativarMotor() {
  digitalWrite(MOTOR_CA, LOW);
  delay(3000);
}