/*Libreria para gestianar el estado de un boton, tanto flanco de pulso, como pulso largo.
  Autor: Javier Vargas García
*/

#include "Arduino.h"

class BlinkLed {
 public:
  BlinkLed(int Pin, int TimeON, int TimeOFF); //Constructor
  BlinkLed(int Pin, int Period);
  void begin();
  void Update(); //Acutaliza el estado del led en funcion del tiempo
  bool GetStatus(); //Devuelve el estado del led
  void Off(); //Apaga el led
  void On(); //Enciende el led
  void NoBlink(); //Desactiva el parpadeo
  void Blink(); //Activa el parpadeo
  void SetPeriod(int Period); //Ajusta el periodo del parpadeo

private:
  int Pin;
  int TimeON;
  int TimeOFF;
  unsigned long m;
  unsigned long m2;
  int T;
  bool state;
  bool active;
  bool NoBlink_;
};
