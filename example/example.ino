#include "BlinkLed.h"

#define LedPin 13

//BlinkLed led(LedPin, 500, 100); //Ton 500ms Toff 100ms
BlinkLed led(LedPin, 500); //Periodo de 500ms

void setup() {
  led.begin();
  led.NoBlink(); //Desactiva el parpadeo
  led.On(); //Enciende el led
  delay(1000);
  led.Off();  //Apaga el led
  delay(1000);
  led.Blink(); //Activa el parpadeo
  led.On(); //Enciende el led
}

void loop() {
  led.Update(); //Actualiza el estado del led
  //led.SetPeriod(100); //Reajusta el periodo de parpadeo
  //led.SetTime(500, 100); //Reajusta el tiempo de on / off
}
