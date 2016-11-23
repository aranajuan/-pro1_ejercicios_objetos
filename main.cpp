#include <iostream>
#include "persona.h"
#include "empleado.h"

using namespace std;

int main()
{

    Persona *juan = new Persona("Juan");
    Persona j2("Juan2","apellido 2");
    Empleado aa("juan","arana",3,"pepe4");
    Empleado bb;
    bb = aa;
    cout << bb;
    /*
    cin >> *juan;
    cout << endl << "Creado";
    j2 = *juan;
    delete juan;
    cout << j2 << endl;
    */
    return 0;
}
