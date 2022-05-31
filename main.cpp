#include <iostream>
#include "persona.h"

using namespace std;

int main()
{
    cout << "Mi primer proyecto en GIT y GITHUB!!" << endl;
    Persona p;
    p.nombre =  "Fernando";
    p.edad = 23;
    cout << p.nombre << endl;
    cout << p.edad << endl;
    return 0;
}
