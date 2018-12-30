#include <Stepper.h>

int kh_ma_octet;
int nbpas = 3072;

Stepper stepper(nbpas, 9, 10, 11, 12);

void setup() 
{
  stepper.setSpeed(12);
  Serial.begin(9600);
}

void loop() 
{
    if (Serial.available() > 0)
    {
     kh_ma_octet = Serial.read();
     if (kh_ma_octet == 'a') {stepper.step(20);}
     if (kh_ma_octet == 'b') {stepper.step(-20);}
    }
}
