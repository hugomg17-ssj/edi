/*
 * patinete.cpp
 *
 *  Created on: 24 feb. 2025
 *      Author: alumno
 */

#include "Patinete.h"
#include <iostream>

using namespace std;

Patinete::Patinete(): identificador(""), marca(""), modelo(""), averiado(false), disponible(true), usuarioActual(nullptr) {
    cout << "Constructor por defecto de Patinete ejecutado" << endl; // [cite: 99]
}

Patinete::Patinete(const string& identificador, const string& marca, const string& modelo):
    identificador(identificador), marca(marca), modelo(modelo), averiado(false), disponible(true), usuarioActual(nullptr) {
    cout << "Constructor parametrizado de Patinete ejecutado" << endl; // [cite: 99]
}

Patinete::Patinete(const Patinete& otro):
    identificador(otro.identificador), marca(otro.marca), modelo(otro.modelo),
    averiado(otro.averiado), disponible(otro.disponible), usuarioActual(otro.usuarioActual) {
    cout << "Constructor por copia de Patinete ejecutado" << endl; // [cite: 99]
}

Patinete::~Patinete() {
    cout << "Destructor de Patinete ejecutado" << endl; // [cite: 99, 100]
}

// Métodos de acceso (getters y setters)
string Patinete::getIdentificador() const {
    return identificador;
}

void Patinete::setIdentificador(const string& identificador) {
    this->identificador = identificador;
}

string Patinete::getMarca() const {
    return marca;
}

void Patinete::setMarca(const string& marca) {
    this->marca = marca;
}

string Patinete::getModelo() const {
    return modelo;
}

void Patinete::setModelo(const string& modelo) {
    this->modelo = modelo;
}

bool Patinete::isAveriado() const {
    return averiado;
}

void Patinete::setAveriado(bool averiado) {
    this->averiado = averiado;
}

bool Patinete::isDisponible() const {
    return disponible;
}

void Patinete::setDisponible(bool disponible) {
    this->disponible = disponible;
}

Usuario* Patinete::getUsuarioActual() const {
    return usuarioActual;
}

void Patinete::setUsuarioActual(Usuario* usuarioActual) {
    this->usuarioActual = usuarioActual;
}

// Método mostrar
void Patinete::mostrar() const {
    cout << "Identificador: " << identificador << endl;
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Averiado: " << (averiado? "Sí": "No") << endl;
    cout << "Disponible: " << (disponible? "Sí": "No") << endl;
    if (!disponible && usuarioActual!= nullptr) {
        cout << "Usuario actual: " << usuarioActual->getNombreCompleto() << endl; // [cite: 14]
    }
}

// Sobrecarga del operador ==
bool Patinete::operator==(const Patinete& otro) const {
    return identificador == otro.identificador;
}
