#ifndef SERVICIO_H
#define SERVICIO_H

#include "Recurso.h"

class Servicio : public Recurso {
public:
    Servicio();
    Servicio(int _id, const String& _nombre, int _cantidad);
};

#endif
