#include "empleado.h"


Empleado::Empleado(const char * nombre,
                const char * apellido,
                int dni,
                const char * legajo,
                const char * cargo
                ){

                (Persona &)*this = Persona(nombre,apellido,dni);
                *this->legajo = '\0';
                if(legajo && *legajo){
                    strncat(this->legajo,legajo,sizeof(this->legajo)-1);
                    if(strlen(legajo) > (sizeof(this->legajo)-1)){
                        cerr << "**Error legajo largo" << endl;
                    }
                }

                }

Empleado::~Empleado(void){

}


ostream & operator <<(ostream & s, const Empleado &o){
    s << (const Persona &)o << endl
        << "Legajo: " << o.legajo <<endl;

    return s;
}


Empleado & Empleado::operator = (const Empleado &o){
    (Persona &)*this = (const Persona &)o;
    strcpy(this->legajo,o.legajo);

    return *this;
}
