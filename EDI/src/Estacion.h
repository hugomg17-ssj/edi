/*
 * Estacion.h
 *
 *  Created on: 10 mar. 2025
 *      Author: alumno
 */

#ifndef ESTACION_H_
#define ESTACION_H_

#include "Cola.h"
#include "Patinete.h"
#include <string>
#include <iostream>  // Necesario para ostream& operator<<

using namespace std;

class Estacion {
private:
    string identificador;
    string direccion;
    int numDisponibles;
    Cola<Patinete*>* cPatinetesAveriados;
    Cola<Patinete*>* cPatinetesDisponibles;

public:
    Estacion();
    Estacion(const string& id, const string& dir);
    Estacion(const Estacion& otraEstacion);
    ~Estacion();

    void agregarPatinete(Patinete* patinete);
    void mostrarAveriados() const;
    void mostrarDisponibles() const;
    void mostrar() const;
    void arreglarPatinete();

    string getIdentificador() const;
    void setIdentificador(const string& id);
    string getDireccion() const;
    void setDireccion(const string& dir);
    int getNumDisponibles() const;
    void setNumDisponibles(int num);
};

#endif
