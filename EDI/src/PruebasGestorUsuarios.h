/*
 * PruebasGestorUsuario.h
 *
 *  Created on: 7 abr. 2025
 *      Author: alumno
 */

#ifndef PRUEBA_GESTORUSUARIOS_H_
#define PRUEBA_GESTORUSUARIOS_H_

#include "GestorUsuarios.h"

// Diseño de las pruebas unitarias para GestorUsuarios

// Casos de prueba para insertar:
// 1. Insertar en lista vacía. Resultado: Usuario insertado como primer elemento.
// 2. Insertar al principio de la lista. Resultado: Usuario insertado antes del primer elemento actual.
// 3. Insertar al final de la lista. Resultado: Usuario insertado como último elemento.
// 4. Insertar en medio de la lista. Resultado: Usuario insertado en la posición correcta.
// 5. Insertar un usuario con DNI duplicado. Resultado: No se inserta el usuario.

// Casos de prueba para buscar:
// 1. Buscar un usuario existente. Resultado: Se devuelve el usuario.
// 2. Buscar un usuario no existente. Resultado: Se devuelve nullptr.

// Casos de prueba para numElementos:
// 1. Lista vacía. Resultado: Devuelve 0.
// 2. Lista con elementos. Resultado: Devuelve el número correcto de elementos.

// Casos de prueba para mostrar:
// 1. Lista vacía. Resultado: Mensaje indicando que la lista está vacía.
// 2. Lista con elementos. Resultado: Se muestra la información de todos los usuarios.

void pruebaInsertar(GestorUsuarios& gestor);
void pruebaBuscar(GestorUsuarios& gestor);
void pruebaNumElementos(GestorUsuarios& gestor);
void pruebaMostrar(GestorUsuarios& gestor);
void pruebasGestorUsuarios();

#endif // PRUEBA_GESTORUSUARIOS_H_
