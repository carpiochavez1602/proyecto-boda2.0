#ifndef PERSONA_H
#define PERSONA_H

#include "Entidad.h"

class Persona : public Entidad {
protected:
    int edad;

public:
    Persona();
    Persona(int _id, const String& _nombre, int _edad);

    void setEdad(int _edad);
    int getEdad() const;
};

#endif
