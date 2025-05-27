/*
 * PruebasEstacion.cpp
 *
 *  Created on: 10 mar. 2025
 *      Author: alumno
 */

#include "PruebasEstacion.h"

#include <iostream>

using namespace std; // Añadimos la directiva using

void pruebaConstructores() {
    cout << "--- Prueba Constructores ---" << endl;

    // Constructor por defecto
    Estacion estacion1;
    cout << "Estacion 1 (por defecto):" << endl;
    estacion1.mostrar();
    cout << endl;

    // Constructor parametrizado
    Estacion estacion2("E001", "Calle Mayor, 1");
    cout << "Estacion 2 (parametrizado):" << endl;
    estacion2.mostrar();
    cout << endl;

    // Constructor por copia
    Estacion estacion3 = estacion2;
    cout << "Estacion 3 (copia de Estacion 2):" << endl;
    estacion3.mostrar();
    cout << endl;
}

void pruebaAgregarPatinete(Estacion& estacion) {
    cout << "--- Prueba Agregar Patinete ---" << endl;

    Patinete* p1 = new Patinete("P001", "Xiaomi", "Mi Electric Scooter");
    Patinete* p2 = new Patinete("P002", "Bird", "One");
    Patinete* p3 = new Patinete("P003", "Lime", "Gen4");
    p2->setAveriado(true);

    estacion.agregarPatinete(p1);
    estacion.agregarPatinete(p2);
    estacion.agregarPatinete(p3);

    estacion.mostrar();
    cout << endl;
}

void pruebaMostrar(Estacion& estacion) {
    cout << "--- Prueba Mostrar ---" << endl;

    estacion.mostrar();
    cout << endl;

    estacion.mostrarAveriados();
    cout << endl;

    estacion.mostrarDisponibles();
    cout << endl;
}

void pruebaArreglarPatinete(Estacion& estacion) {
    cout << "--- Prueba Arreglar Patinete ---" << endl;

    estacion.arreglarPatinete();
    estacion.mostrar();
    cout << endl;

    estacion.arreglarPatinete(); // Intentar arreglar cuando ya no hay averiados
    cout << endl;
}

void pruebasEstacion() {
    pruebaConstructores();

    Estacion estacion("E002", "Calle del Pez, 22");
    pruebaAgregarPatinete(estacion);
    pruebaMostrar(estacion);
    pruebaArreglarPatinete(estacion);

}


