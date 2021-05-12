/*
 * CAPITULO II: PUERTOS DIGITALES
 * CODIGO 3: MANEJO DE CICLOS CON PUERTOS DE ENTRADA
 * OBJETIVO: ENCENDER Y APAGAR LEDS EN DEPENDENCIA DE BOTONES Y SWITCH
 * NOMBRE: RAFAEL FARINANGO
 */

const int led1=8;
const int led2=9;
const int led3=10;
const int btn1=7;
const int btn2=6;
const int sw1=5;
int i=0;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  
  pinMode(btn1,INPUT);
  pinMode(btn2,INPUT);
  pinMode(sw1,INPUT);

}

void loop() {
  if(digitalRead(sw1)==LOW)
    digitalWrite(led1,HIGH);
  else
    digitalWrite(led1,LOW);

//  if(digitalRead(btn2)==HIGH)
//    digitalWrite(led2,HIGH);
//  else
//    digitalWrite(led2,LOW);

  if(digitalRead(btn2)==HIGH){
    delay(350); // delay antirebotes
    i=1-i;
    if(i==1)
      digitalWrite(led2,HIGH);
    else
      digitalWrite(led2,LOW);
    }

  if(digitalRead(btn1)==LOW){
    delay(350);
    digitalWrite(led3,!digitalRead(led3)); // funcion de toggle
    }

    

}
