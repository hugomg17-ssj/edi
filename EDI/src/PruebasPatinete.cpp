
/*
 * pruebasPatinete.cpp
 *
 *  Created on: 24 feb. 2025
 *      Author: alumno
 */

#include "PruebasPatinete.h"
#include <iostream>

using namespace std;

void pruebasPatineteEstaticas() {
    // Prueba del constructor por defecto
    Patinete patinete1;
    cout << "Patinete 1 (estático):" << endl;
    patinete1.mostrar();
    cout << endl;

    // Prueba del constructor parametrizado
    Patinete patinete2("M123456", "Xiaomi", "Mi Electric Scooter 3");
    cout << "Patinete 2 (estático):" << endl;
    patinete2.mostrar();
    cout << endl;

    // Prueba del constructor por copia
    Patinete patinete3(patinete2);
    cout << "Patinete 3 (estático):" << endl;
    patinete3.mostrar();
    cout << endl;

    // Prueba de los métodos setters
    patinete1.setIdentificador("M987654");
    patinete1.setMarca("Cecotec");
    patinete1.setModelo("Bongo Serie A Connected");
    patinete1.setAveriado(true);
    patinete1.setDisponible(false);

    // Prueba de los métodos getters
    cout << "Identificador de Patinete 1: " << patinete1.getIdentificador() << endl;
    cout << "Marca de Patinete 1: " << patinete1.getMarca() << endl;
    cout << "Modelo de Patinete 1: " << patinete1.getModelo() << endl;
    cout << "Averiado: " << (patinete1.isAveriado()? "Sí": "No") << endl;
    cout << "Disponible: " << (patinete1.isDisponible()? "Sí": "No") << endl;
    cout << endl;

    // Prueba del método mostrar
    cout << "Patinete 1 (estático):" << endl;
    patinete1.mostrar();
    cout << endl;

    // Prueba de la sobrecarga del operador ==
    cout << "Patinete 2 y Patinete 3 son iguales: " << (patinete2 == patinete3) << endl;
    cout << endl;
}

void pruebasPatineteDinamicas() {
    // Prueba del constructor por defecto
    Patinete* patinete1 = new Patinete();
    cout << "Patinete 1 (dinámico):" << endl;
    patinete1->mostrar();
    cout << endl;

    // Prueba del constructor parametrizado
    Patinete* patinete2 = new Patinete("M123456", "Xiaomi", "Mi Electric Scooter 3");
    cout << "Patinete 2 (dinámico):" << endl;
    patinete2->mostrar();
    cout << endl;

    // Prueba del constructor por copia
    Patinete* patinete3 = new Patinete(*patinete2);
    cout << "Patinete 3 (dinámico):" << endl;
    patinete3->mostrar();
    cout << endl;

    // Prueba de los métodos setters
    patinete1->setIdentificador("M987654");
    patinete1->setMarca("Cecotec");
    patinete1->setModelo("Bongo Serie A Connected");
    patinete1->setAveriado(true);
    patinete1->setDisponible(false);

    // Prueba de los métodos getters
    cout << "Identificador de Patinete 1: " << patinete1->getIdentificador() << endl;
    cout << "Marca de Patinete 1: " << patinete1->getMarca() << endl;
    cout << "Modelo de Patinete 1: " << patinete1->getModelo() << endl;
    cout << "Averiado: " << (patinete1->isAveriado()? "Sí": "No") << endl;
    cout << "Disponible: " << (patinete1->isDisponible()? "Sí": "No") << endl;
    cout << endl;

    // Prueba del método mostrar
    cout << "Patinete 1 (dinámico):" << endl;
    patinete1->mostrar();
    cout << endl;

    // Prueba de la sobrecarga del operador ==
    cout << "Patinete 2 y Patinete 3 son iguales: " << (*patinete2 == *patinete3) << endl;
    cout << endl;

    // Liberar la memoria de los patinetes dinámicos
    delete patinete1;
    delete patinete2;
    delete patinete3;
}
