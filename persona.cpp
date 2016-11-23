#include "persona.h"

Persona::Persona(const char * nombre,
                const char * apellido,
                int dni){

    this->dni=1;
    this->nombre = copiarstr(nombre);
    this->apellido = copiarstr(apellido);

}

Persona::~Persona(void){
    delete [] this->nombre;
}

char * Persona::copiarstr(const char * origen) const{
    if(origen && *origen){
        try{
            char * aux = new char[strlen(origen)+1];
            return strcpy(aux,origen);
        }catch(std::bad_alloc &){

        }
    }
    return NULL;
}

ostream & operator <<(ostream &s, const Persona &obj){
    s << "Nombre: " << (obj.nombre?obj.nombre:"Sin nombre.")<<endl
      << "Apellido" << (obj.apellido?obj.apellido:"Sin apellido.");
    return s;
}

istream & operator >>(istream &i, Persona &obj){
    char * aux  = new char[100];
    //i.ignore(50000,'\n');
    i.clear();
    cout << "Ingrese nombre: ";
    i.getline(aux,sizeof(aux),'\n');
    delete [] obj.nombre;
    obj.nombre = obj.copiarstr(aux);
    cout << "Ingrese apellido: ";
    i.getline(aux,sizeof(aux),'\n');
    delete [] obj.apellido;
    obj.apellido = obj.copiarstr(aux);

    return i;
}

Persona & Persona::operator =(const Persona &obj){
    this->nombre = copiarstr(obj.nombre);
    this->apellido = copiarstr(obj.apellido);
    if((obj.nombre && this->nombre == NULL) ||
        (obj.apellido && this->apellido == NULL)
    ){
        cerr << "Memoria insuficiente";
    }
    return *this;
}
