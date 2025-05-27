/*
 * GestorUsuarios.cpp
 *
 *  Created on: 7 abr. 2025
 *      Author: alumno
 */
#include "GestorUsuarios.h"

GestorUsuarios::GestorUsuarios() {}

GestorUsuarios::GestorUsuarios(const GestorUsuarios& otro) {
    lUsuarios = otro.lUsuarios;
}

GestorUsuarios::~GestorUsuarios() {
    lUsuarios.moverPrimero();
    while (!lUsuarios.estaVacia()) {
        Usuario* usuario = lUsuarios.consultar();
        delete usuario;
        lUsuarios.eliminar();
    }
}

void GestorUsuarios::insertar(const string& nombreCompleto, const string& telefono, int edad, const string& dni) {
    Usuario* nuevoUsuario = new Usuario(nombreCompleto, telefono, edad, dni);

    if (lUsuarios.estaVacia()) {
        lUsuarios.insertar(nuevoUsuario);
        return;
    }

    lUsuarios.moverPrimero();
    while (!lUsuarios.alFinal()) {
        if (lUsuarios.consultar()->getDni() == dni) {
            delete nuevoUsuario;
            return; // No insertar si el DNI ya existe
        }
        if (lUsuarios.consultar()->getDni() > dni) {
            lUsuarios.insertar(nuevoUsuario);
            return;
        }
        lUsuarios.avanzar();
    }
    lUsuarios.insertar(nuevoUsuario);
}

Usuario* GestorUsuarios::buscar(const string& dni) const {
    if (lUsuarios.estaVacia()) {
        return nullptr;
    }

    lUsuarios.moverPrimero();
    while (!lUsuarios.alFinal()) {
        if (lUsuarios.consultar()->getDni() == dni) {
            return lUsuarios.consultar();
        }
        lUsuarios.avanzar();
    }
    return nullptr;
}

int GestorUsuarios::numElementos() const {
    int count = 0;
    if (lUsuarios.estaVacia()) {
        return 0;
    }
    lUsuarios.moverPrimero();
    while (!lUsuarios.alFinal()) {
        count++;
        lUsuarios.avanzar();
    }
    return count;
}

void GestorUsuarios::mostrar() const {
    if (lUsuarios.estaVacia()) {
        cout << "No hay usuarios registrados." << endl;
        return;
    }

    lUsuarios.moverPrimero();
    while (!lUsuarios.alFinal()) {
        lUsuarios.consultar()->mostrar();
        cout << endl;
        lUsuarios.avanzar();
    }
}



