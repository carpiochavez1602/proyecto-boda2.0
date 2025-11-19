#ifndef OBJETO_H
#define OBJETO_H

#include "Recurso.h"

class Objeto : public Recurso {
public:
    Objeto();
    Objeto(int _id, const String& _nombre, int _cantidad);
};

#endif
