#ifndef RECURSO_H
#define RECURSO_H

#include "Entidad.h"

class Recurso : public Entidad {
protected:
    int cantidad;

public:
    Recurso();
    Recurso(int _id, const String& _nombre, int _cantidad);

    void setCantidad(int _c);
    int getCantidad() const;
};

#endif
