// Autor: LozanoSoft

#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

#include <string>

using namespace std;

class Persona{

  private:
    string nombre;
    static int numSentidos;

  public:

    explicit Persona(string); // Constructor

    // Métodos

    void setNumSentidos(int);
    static int getNumSentidos();
    static string getEspecie();

};

#endif
