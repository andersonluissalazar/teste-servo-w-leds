#include <Servo.h>

#define SERVO 2 // porta d2

Servo s;
int pos;

int ledVermelho = 4;
int ledVerde = 3;

void setup() {

  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);

  s.attach(SERVO);
  Serial.begin(9600);
  s.write(0);

}

void loop() {

  for(pos = 0;pos<180;pos++){
    s.write(pos);
    delay(5);  
  }
  digitalWrite(ledVerde, HIGH);
  delay(1000);
  digitalWrite(ledVerde, LOW);
  for(pos = 180;pos>=0;pos--){
    s.write(pos);
    delay(5);
  }
  digitalWrite(ledVermelho, HIGH);
  delay(1000);
  digitalWrite(ledVermelho, LOW);

}
