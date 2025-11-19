#include "Persona.h"

Persona::Persona() : Entidad(), edad(0) {}
Persona::Persona(int _id, const String& _nombre, int _edad) : Entidad(_id, _nombre), edad(_edad) {}

void Persona::setEdad(int _edad) { edad = _edad; }
int Persona::getEdad() const { return edad; }
