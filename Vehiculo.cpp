#include "Vehiculo.h"
#include <sstream>

Vehiculo::Vehiculo(){}

Vehiculo::Vehiculo(string tipo_, int modelo_, string color_, string marca, float capacidad){
    tipo = tipo_;
    modelo = modelo_;
    color = color_;
    Motor motor_(marca, capacidad);
    motor = motor_;
}

void Vehiculo::agregaLlanta(Llanta llanta, int posicion){
  llantas[posicion] =  llanta;
}

string Vehiculo::estatusLlantas(){
  stringstream aux;
    for(int i = 0 ; i <4; i++){
      aux <<"Tire: " << i << llantas[i].getLlantaInfo()<< endl;
    }
    return aux.str();
}

string Vehiculo::getVehiculoInfo(){
  stringstream aux;
  aux << tipo << endl;
  aux << "Year: " << modelo << endl;
  aux << "Color: " << color << endl;
  aux << motor.getMotorInfo();
  aux << estatusLlantas();
  return aux.str();
}
