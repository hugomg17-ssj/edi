/*
 * pruebasCuentaBancaria.cpp
 *
 *  Created on: 17 feb. 2025
 *      Author: alumno
 */

#include "PruebasCuentaBancaria.h"
#include <iostream>

using namespace std;

void pruebasCuentaBancariaEstaticas() {
    // Prueba del constructor por defecto
    CuentaBancaria cuenta1;
    cout << "Cuenta 1 (estática):" << endl;
    cuenta1.mostrar();
    cout << endl;

    // Prueba del constructor parametrizado
    CuentaBancaria cuenta2("ES1234567890123456789012", 1000);
    cout << "Cuenta 2 (estática):" << endl;
    cuenta2.mostrar();
    cout << endl;

    // Prueba del constructor por copia
    CuentaBancaria cuenta3(cuenta2);
    cout << "Cuenta 3 (estática):" << endl;
    cuenta3.mostrar();
    cout << endl;

    // Prueba de los métodos setters
    cuenta1.setNumeroCuenta("ES9876543210987654321098");
    cuenta1.ingresarDinero(500);

    // Prueba de los métodos getters
    cout << "Número de cuenta de Cuenta 1: " << cuenta1.getNumeroCuenta() << endl;
    cout << "Saldo de Cuenta 1: " << cuenta1.consultarSaldo() << endl;
    cout << endl;

    // Prueba de los métodos para trabajar con la cuenta
    cuenta1.ingresarDinero(1000);
    cuenta1.retirarDinero(500);
    cout << "Saldo de Cuenta 1: " << cuenta1.consultarSaldo() << endl;
    cout << endl;

    // Prueba del método mostrar
    cout << "Cuenta 1 (estática):" << endl;
    cuenta1.mostrar();
    cout << endl;

    // Prueba del método pasarACadena
    cout << "Cuenta 1 como cadena: " << cuenta1.pasarACadena() << endl;
    cout << endl;
}

void pruebasCuentaBancariaDinamicas() {
    // Prueba del constructor por defecto
    CuentaBancaria* cuenta1 = new CuentaBancaria();
    cout << "Cuenta 1 (dinámica):" << endl;
    cuenta1->mostrar();
    cout << endl;

    // Prueba del constructor parametrizado
    CuentaBancaria* cuenta2 = new CuentaBancaria("ES1234567890123456789012", 1000);
    cout << "Cuenta 2 (dinámica):" << endl;
    cuenta2->mostrar();
    cout << endl;

    // Prueba del constructor por copia
    CuentaBancaria* cuenta3 = new CuentaBancaria(*cuenta2);
    cout << "Cuenta 3 (dinámica):" << endl;
    cuenta3->mostrar();
    cout << endl;

    // Prueba de los métodos setters
    cuenta1->setNumeroCuenta("ES9876543210987654321098");
    cuenta1->ingresarDinero(500);

    // Prueba de los métodos getters
    cout << "Número de cuenta de Cuenta 1: " << cuenta1->getNumeroCuenta() << endl;
    cout << "Saldo de Cuenta 1: " << cuenta1->consultarSaldo() << endl;
    cout << endl;

    // Prueba de los métodos para trabajar con la cuenta
    cuenta1->ingresarDinero(1000);
    cuenta1->retirarDinero(500);
    cout << "Saldo de Cuenta 1: " << cuenta1->consultarSaldo() << endl;
    cout << endl;

    // Prueba del método mostrar
    cout << "Cuenta 1 (dinámica):" << endl;
    cuenta1->mostrar();
    cout << endl;

    // Prueba del método pasarACadena
    cout << "Cuenta 1 como cadena: " << cuenta1->pasarACadena() << endl;
    cout << endl;

    // Liberar la memoria de las cuentas dinámicas
    delete cuenta1;
    delete cuenta2;
    delete cuenta3;
}
