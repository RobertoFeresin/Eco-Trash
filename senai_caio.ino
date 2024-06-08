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

  pinMode(Scapacitivo1, INPUT);
  pinMode(Scapacitivo2, INPUT);
  pinMode(Sindutivo, INPUT);
  pinMode(Soptico, INPUT);
  pinMode(Cplastico, INPUT);
  pinMode(Cpapel, INPUT);
  pinMode(Cmetal, INPUT);

  //SAIDAS

  pinMode(Lred, OUTPUT);
  pinMode(Lblue, OUTPUT);
  pinMode(Lyelw, OUTPUT);

}

void loop() {

   digitalWrite(Lyelw,HIGH);
   digitalWrite(Lblue,HIGH);
   digitalWrite(Lred,HIGH);




  if(digitalRead(Soptico) == LOW){

    Serial.println("Iniciando detecção");
    Tipodematerial();

  }else{Serial.println("Aguardando detecção");}
  
  delay(3000);
  }

void Tipodematerial(){


 /* Serial.print("sensor1:");
  Serial.println(digitalRead(Scapacitivo1));
  Serial.print("sensor2:");
  Serial.println(digitalRead(Scapacitivo2));
  Serial.print("sensor3:");
  Serial.println(digitalRead(Sindutivo));*/

  if(digitalRead(Sindutivo) == HIGH){

    digitalWrite(Lyelw,LOW);
    tipolixo = 1; // metal
    Serial.print("1");
  }

  else if(digitalRead(Scapacitivo1) == HIGH and digitalRead(Scapacitivo2) == HIGH ){
    digitalWrite(Lred,LOW);
    tipolixo = 2; // plastico
    Serial.print("2");
}

  else if(digitalRead(Scapacitivo1) == HIGH and digitalRead(Scapacitivo2) == LOW){
    digitalWrite(Lblue,LOW);
    tipolixo = 3; // papel
    Serial.print("3");
  }

  else{Serial.println("Não foi identificado o material");}

   delay(100);
  
}


