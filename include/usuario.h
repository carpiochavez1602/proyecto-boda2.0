#ifndef USUARIO_H
#define USUARIO_H

#include "Persona.h"
#include "Mi_String.h"

class Usuario : public Persona {
private:
    String rol;

public:
    Usuario();
    Usuario(int _id, const String& _nombre, int _edad, const String& _rol);

    void setRol(const String& _rol);
    String getRol() const;
};

#endif
