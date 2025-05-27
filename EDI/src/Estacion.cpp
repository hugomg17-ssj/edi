/*
 * Estacion.cpp
 *
 *  Created on: 10 mar. 2025
 *      Author: alumno
 */
#include "Estacion.h"

Estacion::Estacion() : identificador(""), direccion(""), numDisponibles(0) {
    cPatinetesAveriados = new Cola<Patinete*>();
    cPatinetesDisponibles = new Cola<Patinete*>();
}

Estacion::Estacion(const string& id, const string& dir) : identificador(id), direccion(dir), numDisponibles(0) {
    cPatinetesAveriados = new Cola<Patinete*>();
    cPatinetesDisponibles = new Cola<Patinete*>();
}

Estacion::Estacion(const Estacion& otraEstacion) : identificador(otraEstacion.identificador), direccion(otraEstacion.direccion), numDisponibles(otraEstacion.numDisponibles) {
    cPatinetesAveriados = new Cola<Patinete*>();
    cPatinetesDisponibles = new Cola<Patinete*>();

    Cola<Patinete*>* tempAveriados = otraEstacion.cPatinetesAveriados;
    Cola<Patinete*>* tempDisponibles = otraEstacion.cPatinetesDisponibles;

    while (!tempAveriados->estaVacia()) {
        cPatinetesAveriados->encolar(new Patinete(*tempAveriados->getPrimero()));
        tempAveriados->desencolar();
    }

    while (!tempDisponibles->estaVacia()) {
        cPatinetesDisponibles->encolar(new Patinete(*tempDisponibles->getPrimero()));
        tempDisponibles->desencolar();
    }
}

Estacion::~Estacion() {
    while (!cPatinetesAveriados->estaVacia()) {
        delete cPatinetesAveriados->getPrimero();
        cPatinetesAveriados->desencolar();
    }
    delete cPatinetesAveriados;

    while (!cPatinetesDisponibles->estaVacia()) {
        delete cPatinetesDisponibles->getPrimero();
        cPatinetesDisponibles->desencolar();
    }
    delete cPatinetesDisponibles;
}

void Estacion::agregarPatinete(Patinete* patinete) {
    if (patinete->isAveriado()) {
        cPatinetesAveriados->encolar(patinete);
    } else {
        cPatinetesDisponibles->encolar(patinete);
        numDisponibles++;
    }
}

void Estacion::mostrarAveriados() const {
    cout << "Patinetes averiados en la estacion " << identificador << ":" << endl;
    Cola<Patinete*> tempCola(*cPatinetesAveriados);
    while (!tempCola.estaVacia()) {
        tempCola.getPrimero()->mostrar();
        tempCola.desencolar();
    }
    cout << "Total patinetes averiados: " << cPatinetesAveriados->estaVacia() << endl;
}

void Estacion::mostrarDisponibles() const {
    cout << "Patinetes disponibles en la estacion " << identificador << ":" << endl;
    Cola<Patinete*> tempCola(*cPatinetesDisponibles);
    while (!tempCola.estaVacia()) {
        tempCola.getPrimero()->mostrar();
        tempCola.desencolar();
    }
    cout << "Total patinetes disponibles: " << numDisponibles << endl;
}

void Estacion::mostrar() const {
    cout << "Estacion: " << identificador << ", Direccion: " << direccion << endl;
    cout << "Total patinetes disponibles: " << numDisponibles << endl;
    cout << "Total patinetes averiados: " << (cPatinetesAveriados->estaVacia() ? 0 : cPatinetesAveriados->estaVacia()) << endl;
}

void Estacion::arreglarPatinete() {
    if (!cPatinetesAveriados->estaVacia()) {
        Patinete* patinete = cPatinetesAveriados->getPrimero();
        patinete->setAveriado(false);
        cPatinetesAveriados->desencolar();
        cPatinetesDisponibles->encolar(patinete);
        numDisponibles++;
        cout << "Patinete " << patinete->getIdentificador() << " arreglado y anadido a disponibles." << endl;
    } else {
        cout << "No hay patinetes averiados para arreglar." << endl;
    }
}

string Estacion::getIdentificador() const { return identificador; }
void Estacion::setIdentificador(const string& id) { identificador = id; }
string Estacion::getDireccion() const { return direccion; }
void Estacion::setDireccion(const string& dir) { direccion = dir; }
int Estacion::getNumDisponibles() const { return numDisponibles; }
void Estacion::setNumDisponibles(int num) { numDisponibles = num; }
