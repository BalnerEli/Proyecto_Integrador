#include "Llanta.h"
using namespace std;

Llanta::Llanta(){};

Llanta::Llanta(string detalles_, bool status_){
    detalles = detalles_;
    status = status_;
};

void Llanta::setStatus(bool status_){
  status = status_;
}

bool Llanta::getStatus(){
  return status;
}

string Llanta::getLlantaInfo(){
  string  aux;
  if (status == true)
    aux = detalles + " flat: true";
  else
    aux = detalles + " flat: false";
  return aux;
}
