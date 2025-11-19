#include "Mesa.h"

Mesa::Mesa() : id(0), cantidadActual(0) {
    for (int i = 0; i < MAX_PERSONAS; i++)
        invitados[i] = nullptr;
}

Mesa::Mesa(int _id) : id(_id), cantidadActual(0) {
    for (int i = 0; i < MAX_PERSONAS; i++)
        invitados[i] = nullptr;
}

Mesa::~Mesa() {
    // no borramos los invitados, la memoria la maneja quien los creó
}

bool Mesa::agregarInvitado(Persona* p) {
    if (cantidadActual >= MAX_PERSONAS)
        return false; // mesa llena

    invitados[cantidadActual] = p;
    cantidadActual++;
    return true;
}

bool Mesa::removerInvitado(int idPersona) {
    for (int i = 0; i < cantidadActual; i++) {
        if (invitados[i]->getId() == idPersona) {
            // mover los siguientes un lugar atrás
            for (int j = i; j < cantidadActual - 1; j++)
                invitados[j] = invitados[j + 1];
            invitados[cantidadActual - 1] = nullptr;
            cantidadActual--;
            return true;
        }
    }
    return false; // no encontrado
}

void Mesa::mostrarInvitados() const {
    std::cout << "Mesa " << id << " tiene " << cantidadActual << " invitados:\n";
    for (int i = 0; i < cantidadActual; i++) {
        std::cout << "- " << invitados[i]->getNombre() << " (ID: " << invitados[i]->getId() << ")\n";
    }
}

int Mesa::verCapacidadDisponible() const {
    return MAX_PERSONAS - cantidadActual;
}

int Mesa::getId() const { return id; }
void Mesa::setId(int _id) { id = _id; }
