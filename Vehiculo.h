#ifndef VEHICULO_H_
#define VEHICULO_H_

#include "Llanta.cpp"
#include "Motor.cpp"

class Vehiculo{

  private:
    Llanta llantas[4];
    Motor motor;
    string tipo;
    int modelo;
    string color;


  public:
    Vehiculo();
    Vehiculo(string, int, string, string, float);
    void agregaLlanta(Llanta, int);
    string estatusLlantas();
    string getVehiculoInfo();

};

#endif
