/*
 * CuentaBancaria.h
 *
 *  Created on: 17 feb. 2025
 *      Author: alumno
 */

#ifndef CUENTABANCARIA_H
#define CUENTABANCARIA_H

#include <string> // [cite: 37]

using namespace std;

class CuentaBancaria {
private:
    string numeroCuenta;
    float saldo;

public:
    CuentaBancaria(); // Constructor por defecto [cite: 38]
    CuentaBancaria(const string& numeroCuenta, float saldo); // Constructor parametrizado [cite: 38]
    CuentaBancaria(const CuentaBancaria& otra); // Constructor por copia [cite: 38]
    ~CuentaBancaria(); // Destructor [cite: 39]

    // Métodos get/set
    void setNumeroCuenta(const string& numeroCuenta);
    string getNumeroCuenta() const;
    void ingresarDinero(float cantidad); // Método para ingresar dinero [cite: 39]
    void retirarDinero(float cantidad); // Método para retirar dinero [cite: 39]
    float consultarSaldo() const; // Método para consultar saldo [cite: 39]

    // Método mostrar [cite: 39]
    void mostrar() const;

    // Método pasarACadena
    string pasarACadena() const;
};

#endif // CUENTABANCARIA_H
