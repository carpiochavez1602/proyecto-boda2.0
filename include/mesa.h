#ifndef MESA_H
#define MESA_H

#include "Persona.h"
#include "Mi_String.h"
#include <iostream>

const int MAX_PERSONAS = 10; // cada mesa tiene 10 espacios

class Mesa {
private:
    int id;
    int cantidadActual;
    Persona* invitados[MAX_PERSONAS]; // array fijo de punteros a Persona

public:
    Mesa();
    Mesa(int _id);
    ~Mesa();

    bool agregarInvitado(Persona* p);
    bool removerInvitado(int idPersona);
    void mostrarInvitados() const;
    int verCapacidadDisponible() const;

    int getId() const;
    void setId(int _id);
};

#endif
