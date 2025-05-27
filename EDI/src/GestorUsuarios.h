/*
 * GestorUsuarios.h
 *
 *  Created on: 31 mar. 2025
 *      Author: alumno
 */

#ifndef GESTORUSUARIOS_H_
#define GESTORUSUARIOS_H_

#include "ListaDPI.h"
#include "Usuario.h"
#include <string>
#include <iostream>

using namespace std;

class GestorUsuarios {
private:
    mutable ListaDPI<Usuario*> lUsuarios;  //  <---  Añadimos mutable

public:
    GestorUsuarios();
    GestorUsuarios(const GestorUsuarios& otro);
    ~GestorUsuarios();

    void insertar(const string& nombreCompleto, const string& telefono, int edad, const string& dni);
    Usuario* buscar(const string& dni) const;
    int numElementos() const;
    void mostrar() const;
};

#endif // GESTORUSUARIOS_H_
