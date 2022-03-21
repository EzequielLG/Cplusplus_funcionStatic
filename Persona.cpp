// Autor: LozanoSoft

#include "Persona.h"

int Persona::numSentidos = 5;

Persona::Persona(string nombreC){
  nombre = nombreC;
}

string Persona::getEspecie(){
  return "humana";
}

int Persona::getNumSentidos(){
  return numSentidos;
}

void Persona::setNumSentidos(int numN_sentidos){
  numSentidos = numN_sentidos;
}
