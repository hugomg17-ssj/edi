/*
 * Usuario.h
 *
 *  Created on: 10 feb. 2025
 *      Author: alumno
 */

/*
 * Usuario.h
 *
 * Created on: 10 feb. 2025
 * Author: alumno
 */

#ifndef USUARIO_H
#define USUARIO_H

#include "CuentaBancaria.h"

using namespace std;

class Usuario {
private:
    string nombreCompleto;
    string telefono;
    int edad;
    string dni; // Añadimos el DNI
    CuentaBancaria *cuentaB;

public:
    Usuario();
    Usuario(const string& nombreCompleto, const string& telefono, int edad, const string& dni); // Modificamos el constructor
    Usuario(const Usuario& otro);
    ~Usuario();

    // Métodos setters
    void setNombreCompleto(const string& nombreCompleto);
    void setTelefono(const string& telefono);
    void setEdad(int edad);
    void setDni(const string& dni);  // Añadimos el setter para DNI

    // Métodos getters
    string getNombreCompleto() const;
    string getTelefono() const;
    int getEdad() const;
    string getDni() const;  // Añadimos el getter para DNI

    // Métodos para trabajar con la cuenta bancaria
    void ingresarDinero(float cantidad);
    void retirarDinero(float cantidad);
    float consultarSaldo() const;

    // Método mostrar
    void mostrar() const;

    // Método pasarACadena
    string pasarACadena() const;
};

#endif // USUARIO_H
