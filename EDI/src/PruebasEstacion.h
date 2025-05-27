/*
 * PruebasEstacion.h
 *
 *  Created on: 10 mar. 2025
 *      Author: alumno
 */

#ifndef PRUEBAESTACION_H_
#define PRUEBAESTACION_H_

#include "Estacion.h" // Incluimos Estacion.h
#include <iostream>

using namespace std; // Añadimos la directiva using

// Diseño de pruebas unitarias para la clase Estacion

// Casos de prueba para Constructor por defecto:
// 1. Crear una Estacion por defecto. Resultado: La estación se crea con valores por defecto.

// Casos de prueba para Constructor parametrizado:
// 1. Crear una Estacion con valores específicos. Resultado: La estación se crea con los valores proporcionados.

// Casos de prueba para Constructor por copia:
// 1. Crear una Estacion y luego crear una copia. Resultado: La copia es idéntica a la original.

// Casos de prueba para agregarPatinete:
// 1. Agregar un patinete disponible. Resultado: El patinete se añade a la cola de disponibles.
// 2. Agregar un patinete averiado. Resultado: El patinete se añade a la cola de averiados.

// Casos de prueba para mostrarAveriados:
// 1. Mostrar patinetes averiados cuando no hay ninguno. Resultado: Se muestra un mensaje indicando que no hay patinetes averiados.
// 2. Mostrar patinetes averiados cuando hay algunos. Resultado: Se muestra la información de los patinetes averiados.

// Casos de prueba para mostrarDisponibles:
// 1. Mostrar patinetes disponibles cuando no hay ninguno. Resultado: Se muestra un mensaje indicando que no hay patinetes disponibles.
// 2. Mostrar patinetes disponibles cuando hay algunos. Resultado: Se muestra la información de los patinetes disponibles.

// Casos de prueba para mostrar:
// 1. Mostrar información de la estación. Resultado: Se muestra la información de la estación y el número de patinetes disponibles y averiados.

// Casos de prueba para arreglarPatinete:
// 1. Arreglar un patinete cuando hay patinetes averiados. Resultado: El primer patinete de la cola de averiados se pasa a la cola de disponibles.
// 2. Arreglar un patinete cuando no hay patinetes averiados. Resultado: Se muestra un mensaje indicando que no hay patinetes para arreglar.

void pruebaConstructores();
void pruebaAgregarPatinete(Estacion& estacion);
void pruebaMostrar(Estacion& estacion);
void pruebaArreglarPatinete(Estacion& estacion);
void pruebasEstacion();

#endif
