/*
 * CuentaBancaria.cpp
 *
 *  Created on: 17 feb. 2025
 *      Author: alumno
 */

#include "CuentaBancaria.h"
#include <iostream>

using namespace std;

CuentaBancaria::CuentaBancaria(): numeroCuenta(""), saldo(0) {
    cout << "Constructor por defecto de CuentaBancaria ejecutado" << endl; // [cite: 99]
}

CuentaBancaria::CuentaBancaria(const string& numeroCuenta, float saldo):
    numeroCuenta(numeroCuenta), saldo(saldo) {
    cout << "Constructor parametrizado de CuentaBancaria ejecutado" << endl; // [cite: 99]
}

CuentaBancaria::CuentaBancaria(const CuentaBancaria& otra):
    numeroCuenta(otra.numeroCuenta), saldo(otra.saldo) {
    cout << "Constructor por copia de CuentaBancaria ejecutado" << endl; // [cite: 99]
}

CuentaBancaria::~CuentaBancaria() {
    cout << "Destructor de CuentaBancaria ejecutado" << endl; // [cite: 99, 100]
}

// Métodos get/set
void CuentaBancaria::setNumeroCuenta(const string& numeroCuenta) {
    this->numeroCuenta = numeroCuenta;
}

string CuentaBancaria::getNumeroCuenta() const {
    return numeroCuenta;
}

void CuentaBancaria::ingresarDinero(float cantidad) {
    saldo += cantidad;
}

void CuentaBancaria::retirarDinero(float cantidad) {
    if (cantidad <= saldo) {
        saldo -= cantidad;
    } else {
        cout << "Saldo insuficiente" << endl;
    }
}

float CuentaBancaria::consultarSaldo() const {
    return saldo;
}

// Método mostrar
void CuentaBancaria::mostrar() const {
    cout << "Número de cuenta: " << numeroCuenta << endl;
    cout << "Saldo: " << saldo << endl;
}

// Método pasarACadena
string CuentaBancaria::pasarACadena() const {
    return "Número de cuenta: " + numeroCuenta + ", Saldo: " + to_string(saldo);
}
