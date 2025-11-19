#ifndef INVITADO_H
#define INVITADO_H

#include "Persona.h"

class Invitado : public Persona {
public:
    Invitado();
    Invitado(int _id, const String& _nombre, int _edad);
};

#endif
