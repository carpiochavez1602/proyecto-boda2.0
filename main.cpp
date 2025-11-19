#include "Invitado.h"
#include "Mesa.h"
#include "Mi_String.h"
#include <iostream>

// función auxiliar para crear String con número
String crearNombre(int num) {
    char buffer[20];
    int n = num, i = 18;
    buffer[19] = '\0';
    buffer[i] = '\0';
    if (n == 0) buffer[--i] = '0';
    while (n > 0) {
        buffer[--i] = '0' + (n % 10);
        n /= 10;
    }
    String numero(&buffer[i]);
    String nombre("Invitado ");
    nombre.append(numero.c_str());
    return nombre;
}

int main() {
    const int totalMesas = 40;
    const int capacidadMesa = 10;
    const int totalInvitados = 400;

    // crear mesas
    Mesa* mesas[totalMesas];
    for (int i = 0; i < totalMesas; i++)
        mesas[i] = new Mesa(i + 1);

    // crear invitados
    Invitado* invitados[totalInvitados];
    for (int i = 0; i < totalInvitados; i++)
        invitados[i] = new Invitado(i + 1, crearNombre(i + 1), 25);

    // asignar invitados a mesas
    int mesaActual = 0;
    for (int i = 0; i < totalInvitados; i++) {
        bool agregado = mesas[mesaActual]->agregarInvitado(invitados[i]);
        if (!agregado) mesaActual++;
    }

    // mostrar todas las mesas
    for (int i = 0; i < totalMesas; i++) {
        mesas[i]->mostrarInvitados();
        std::cout << "Capacidad disponible: " << mesas[i]->verCapacidadDisponible() << "\n\n";
    }

    // liberar memoria
    for (int i = 0; i < totalInvitados; i++)
        delete invitados[i];
    for (int i = 0; i < totalMesas; i++)
        delete mesas[i];

    return 0;
}
