#ifndef ENTIDAD_H
#define ENTIDAD_H

#include "Mi_String.h"

class Entidad {
protected:
    int id;
    String nombre;

public:
    Entidad();
    Entidad(int _id, const String& _nombre);

    void setId(int _id);
    void setNombre(const String& _nombre);

    int getId() const;
    String getNombre() const;
};

#endif
