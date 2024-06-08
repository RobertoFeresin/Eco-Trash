#define Scapacitivo1 3
#define Scapacitivo2 2
#define Sindutivo 4
#define Soptico 5
#define Lred 6
#define Lblue 7
#define Lyelw 8
#define Cplastico 9
#define Cpapel 10
#define Cmetal 11
int tipolixo = 0;


void setup() {
  Serial.begin(9600);

  //ENTRADAS

  
  pinMode(Cplastico, INPUT_PULLUP);
  pinMode(Cpapel, INPUT_PULLUP);
  pinMode(Cmetal, INPUT_PULLUP);

  //SAIDAS


}

void loop() {
  
  if (digitalRead(Cmetal) == LOW) { // SE A LEITURA DO PINO FOR IGUAL A LOW
    Serial.println("fimdecurso_ligado 0");   // IMPRIME NO SERIAL "Chave acionada"
  } else {                              // SENÃO
    Serial.println("fimdecurso_desligado 0"); // IMPRIME NO SERIAL "Chave desacionada"
  }
  if (digitalRead(Cpapel) == LOW) { // SE A LEITURA DO PINO FOR IGUAL A LOW
    Serial.println("fimdecurso_ligado 1");   // IMPRIME NO SERIAL "Chave acionada"
  } else {                              // SENÃO
    Serial.println("fimdecurso_desligado 1"); // IMPRIME NO SERIAL "Chave desacionada"
  }
  if (digitalRead(Cplastico) == LOW) { // SE A LEITURA DO PINO FOR IGUAL A LOW
    Serial.println("fimdecurso_ligado 2");   // IMPRIME NO SERIAL "Chave acionada"
  } else {                              // SENÃO
    Serial.println("fimdecurso_desligado 2"); // IMPRIME NO SERIAL "Chave desacionada"
  }

  delay(1000); // DELAY PARA EVITAR LEITURAS RÁPIDAS DEMAIS
 
}


