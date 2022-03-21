// Autor: LozanoSoft

#include <iostream>
#include "Persona.cpp"

int main(){

  Persona persona("LozanoSoft");
  Persona persona2("LozanoSoft2.0");

  cout << "Las personas son de la especie " << Persona::getEspecie() << endl;
  cout << "El número de sentidos de una persona es " << Persona::getNumSentidos() << endl;

  persona.setNumSentidos(3);

  cout << "\nLozanoSoft es de la especie " << persona.getEspecie() << endl;
  cout << "El número de sentidos de LozanoSoft es " << persona.getNumSentidos() << endl;
  
  cout << "\nEl número de sentidos de LozanoSoft2.0 es " << persona2.getNumSentidos() << endl;
  cout << "El número de sentidos de una persona es " << Persona::getNumSentidos() << endl;

  return 0;

}
