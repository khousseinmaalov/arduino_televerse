void setup() {

  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

int nombre;

void loop() {
  if (Serial.available() > 0)
    {
      nombre = Serial.read();
      Serial.println();
     if (nombre == 'a'){digitalWrite(13, HIGH);}
     if (nombre == 'b'){digitalWrite(13, HIGH);}
     else {digitalWrite(13, LOW);}
    }
}
