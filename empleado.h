#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

#include<iostream>

#include "persona.h"

using namespace std;

class Empleado : public Persona{
    private:
        char legajo[6];
        char * cargo;
    public:
        Empleado(const char * nombre = NULL,
                const char * apellido = NULL,
                int dni=0,
                const char * legajo = NULL,
                const char * cargo = NULL
                );
        ~Empleado(void);
        friend ostream& operator <<(ostream& sal, const Empleado & obj);
        friend istream& operator <<(istream& ing, Empleado & obj);
        bool operator !=(const Empleado & obj) const;
        Empleado & operator = (const Empleado &obj);
};

#endif // EMPLEADO_H_INCLUDED
