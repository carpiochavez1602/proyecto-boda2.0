#include "Recurso.h"

Recurso::Recurso() : Entidad(), cantidad(0) {}
Recurso::Recurso(int _id, const String& _nombre, int _cantidad) : Entidad(_id, _nombre), cantidad(_cantidad) {}

void Recurso::setCantidad(int _c) { cantidad = _c; }
int Recurso::getCantidad() const { return cantidad; }
