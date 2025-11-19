#include "Objeto.h"

Objeto::Objeto() : Recurso() {}
Objeto::Objeto(int _id, const String& _nombre, int _cantidad) : Recurso(_id, _nombre, _cantidad) {}
