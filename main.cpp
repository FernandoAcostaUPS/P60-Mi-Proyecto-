#include <iostream>
#include "persona.h"

using namespace std;

int main()
{
    cout << "Mi primer proyecto en GIT y GITHUB!!" << endl;
    Persona p;
    p.nombre =  "Fernando";
    p.edad = 23;
    cout << "Nombre: " << p.nombre << endl;
    cout << "Edad: " << p.edad << endl;
    return 0;
}
