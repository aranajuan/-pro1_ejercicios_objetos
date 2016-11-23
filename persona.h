#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

#include <iostream>
#include <string.h>

using namespace std;

class Persona{

    private:
        char * nombre,
            * apellido;
        int dni;

    protected:
        char * copiarstr(const char * origen) const;

    public:
        Persona(const char * nombre = NULL,
                const char * apellido = NULL,
                int dni=0);
        ~Persona(void);

        friend ostream &operator <<(ostream &s, const Persona &obj);
        friend istream &operator >>(istream &s, Persona &obj);

        bool operator != (const Persona &obj) const;

        Persona & operator = (const Persona &obj);
};

#endif // PERSONA_H_INCLUDED
