/*
 * PruebasUsuario.cpp
 *
 *  Created on: 10 feb. 2025
 *      Author: alumno
 */

/*#include "PruebasUsuario.h"
#include <iostream>

using namespace std;

void pruebasUsuarioEstaticas() {
    // Prueba del constructor por defecto
    Usuario usuario1;
    cout << "Usuario 1 (estático):" << endl;
    usuario1.mostrar();
    cout << endl;

    // Prueba del constructor parametrizado
    Usuario usuario2("Juan Pérez", "123456789", 30);
    cout << "Usuario 2 (estático):" << endl;
    usuario2.mostrar();
    cout << endl;

    // Prueba del constructor por copia
    Usuario usuario3(usuario2);
    cout << "Usuario 3 (estático):" << endl;
    usuario3.mostrar();
    cout << endl;

    // Prueba de los métodos setters
    usuario1.setNombreCompleto("Ana García");
    usuario1.setTelefono("987654321");
    usuario1.setEdad(25);

    // Prueba de los métodos getters
    cout << "Nombre completo de Usuario 1: " << usuario1.getNombreCompleto() << endl;
    cout << "Teléfono de Usuario 1: " << usuario1.getTelefono() << endl;
    cout << "Edad de Usuario 1: " << usuario1.getEdad() << endl;
    cout << endl;

    // Prueba de los métodos para trabajar con la cuenta bancaria
    usuario1.ingresarDinero(1000);
    usuario1.retirarDinero(500);
    cout << "Saldo de Usuario 1: " << usuario1.consultarSaldo() << endl;
    cout << endl;

    // Prueba del método mostrar
    cout << "Usuario 1 (estático):" << endl;
    usuario1.mostrar();
    cout << endl;

    // Prueba del método pasarACadena
    cout << "Usuario 1 como cadena: " << usuario1.pasarACadena() << endl;
    cout << endl;
}

void pruebasUsuarioDinamicas() {
    // Prueba del constructor por defecto
    Usuario* usuario1 = new Usuario();
    cout << "Usuario 1 (dinámico):" << endl;
    usuario1->mostrar();
    cout << endl;

    // Prueba del constructor parametrizado
    Usuario* usuario2 = new Usuario("Juan Pérez", "123456789", 30);
    cout << "Usuario 2 (dinámico):" << endl;
    usuario2->mostrar();
    cout << endl;

    // Prueba del constructor por copia
    Usuario* usuario3 = new Usuario(*usuario2);
    cout << "Usuario 3 (dinámico):" << endl;
    usuario3->mostrar();
    cout << endl;

    // Prueba de los métodos setters
    usuario1->setNombreCompleto("Ana García");
    usuario1->setTelefono("987654321");
    usuario1->setEdad(25);

    // Prueba de los métodos getters
    cout << "Nombre completo de Usuario 1: " << usuario1->getNombreCompleto() << endl;
    cout << "Teléfono de Usuario 1: " << usuario1->getTelefono() << endl;
    cout << "Edad de Usuario 1: " << usuario1->getEdad() << endl;
    cout << endl;

    // Prueba de los métodos para trabajar con la cuenta bancaria
    usuario1->ingresarDinero(1000);
    usuario1->retirarDinero(500);
    cout << "Saldo de Usuario 1: " << usuario1->consultarSaldo() << endl;
    cout << endl;

    // Prueba del método mostrar
    cout << "Usuario 1 (dinámico):" << endl;
    usuario1->mostrar();
    cout << endl;

    // Prueba del método pasarACadena
    cout << "Usuario 1 como cadena: " << usuario1->pasarACadena() << endl;
    cout << endl;

    // Liberar la memoria de los usuarios dinámicos
    delete usuario1;
    delete usuario2;
    delete usuario3;
}*/
