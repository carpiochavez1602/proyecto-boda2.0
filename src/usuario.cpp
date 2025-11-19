#include "Usuario.h"

Usuario::Usuario() : Persona(), rol("") {}
Usuario::Usuario(int _id, const String& _nombre, int _edad, const String& _rol)
    : Persona(_id, _nombre, _edad), rol(_rol) {}

void Usuario::setRol(const String& _rol) { rol = _rol; }
String Usuario::getRol() const { return rol; }
