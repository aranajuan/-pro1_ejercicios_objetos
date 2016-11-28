#include <iostream>
#include "persona.h"
#include "empleado.h"

using namespace std;

int main()
{

    Persona *juan = new Persona("Juan","arana",10);

    cout << "Resultado: "  << (*juan) + (*juan);

    return 0;
}
