/*
 * PruebasGestorUsuario.cpp
 *
 *  Created on: 7 abr. 2025
 *      Author: alumno
 */
#include "PruebasGestorUsuarios.h"
#include <iostream>

using namespace std;

void pruebaInsertar(GestorUsuarios& gestor) {
    cout << "--- Prueba Insertar ---" << endl;
    gestor.insertar("Juan Perez", "123456789", 25, "12345678A");
    gestor.insertar("Ana Garcia", "987654321", 30, "98765432B");
    gestor.insertar("Luis Martinez", "456123789", 20, "45612378C");
    gestor.insertar("Carlos Lopez", "111222333", 40, "12345678A"); // DNI duplicado
    gestor.insertar("David Fernandez", "444555666", 35, "12345678D");

    cout << "Numero de usuarios despues de insertar: " << gestor.numElementos() << endl;
    cout << endl;
}

void pruebaBuscar(GestorUsuarios& gestor) {
    cout << "--- Prueba Buscar ---" << endl;
    Usuario* usuarioEncontrado = gestor.buscar("98765432B");
    if (usuarioEncontrado) {
        cout << "Usuario encontrado: ";
        usuarioEncontrado->mostrar();
    } else {
        cout << "Usuario no encontrado." << endl;
    }

    Usuario* usuarioNoEncontrado = gestor.buscar("00000000Z");
    if (usuarioNoEncontrado) {
        cout << "Usuario encontrado (esto no deberia pasar)." << endl;
    } else {
        cout << "Usuario no encontrado." << endl;
    }
    cout << endl;
}

void pruebaNumElementos(GestorUsuarios& gestor) {
    cout << "--- Prueba NumElementos ---" << endl;
    cout << "Numero de usuarios: " << gestor.numElementos() << endl;
    cout << endl;
}

void pruebaMostrar(GestorUsuarios& gestor) {
    cout << "--- Prueba Mostrar ---" << endl;
    gestor.mostrar();
    cout << endl;
}

void pruebasGestorUsuarios() {
    GestorUsuarios gestor;

    pruebaInsertar(gestor);
    pruebaBuscar(gestor);
    pruebaNumElementos(gestor);
    pruebaMostrar(gestor);


}



