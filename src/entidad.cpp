#include "Entidad.h"

Entidad::Entidad() : id(0), nombre("") {}
Entidad::Entidad(int _id, const String& _nombre) : id(_id), nombre(_nombre) {}

void Entidad::setId(int _id) { id = _id; }
void Entidad::setNombre(const String& _nombre) { nombre = _nombre; }

int Entidad::getId() const { return id; }
String Entidad::getNombre() const { return nombre; }
