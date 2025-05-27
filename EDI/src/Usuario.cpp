/*
 * Usuario.cpp
 *
 *  Created on: 10 feb. 2025
 *      Author: alumno
 */

/*
 * Usuario.cpp
 *
 * Created on: 10 feb. 2025
 * Author: alumno
 */

#include "Usuario.h"
#include <iostream>

using namespace std;

Usuario::Usuario(): nombreCompleto(""), telefono(""), edad(0), dni("") { // Añadimos inicialización para DNI
    cuentaB = new CuentaBancaria();
    cout << "Constructor por defecto ejecutado" << endl;
}

Usuario::Usuario(const string& nombreCompleto, const string& telefono, int edad, const string& dni):  // Modificamos el constructor
    nombreCompleto(nombreCompleto), telefono(telefono), edad(edad), dni(dni) {
    cuentaB = new CuentaBancaria();
    cout << "Constructor parametrizado ejecutado" << endl;
}

Usuario::Usuario(const Usuario& otro):
    nombreCompleto(otro.nombreCompleto), telefono(otro.telefono), edad(otro.edad), dni(otro.dni) { // Añadimos copia para DNI
    cuentaB = new CuentaBancaria(*(otro.cuentaB));
    cout << "Constructor por copia ejecutado" << endl;
}

Usuario::~Usuario() {
    delete cuentaB;
    cout << "Destructor ejecutado" << endl;
}

// Métodos setters
void Usuario::setNombreCompleto(const string& nombreCompleto) {
    this->nombreCompleto = nombreCompleto;
}

void Usuario::setTelefono(const string& telefono) {
    this->telefono = telefono;
}

void Usuario::setEdad(int edad) {
    this->edad = edad;
}

void Usuario::setDni(const string& dni) {
    this->dni = dni;
}

// Métodos getters
string Usuario::getNombreCompleto() const {
    return nombreCompleto;
}

string Usuario::getTelefono() const {
    return telefono;
}

int Usuario::getEdad() const {
    return edad;
}

string Usuario::getDni() const {
    return dni;
}

// Métodos para trabajar con la cuenta bancaria
void Usuario::ingresarDinero(float cantidad) {
    cuentaB->ingresarDinero(cantidad);
}

void Usuario::retirarDinero(float cantidad) {
    cuentaB->retirarDinero(cantidad);
}

float Usuario::consultarSaldo() const {
    return cuentaB->consultarSaldo();
}

// Método mostrar
void Usuario::mostrar() const {
    cout << "Nombre completo: " << nombreCompleto << endl;
    cout << "Teléfono: " << telefono << endl;
    cout << "Edad: " << edad << endl;
    cout << "DNI: " << dni << endl;  // Añadimos mostrar DNI
    cout << "Cuenta bancaria: " << endl;
    cuentaB->mostrar();
}

// Método pasarACadena
string Usuario::pasarACadena() const {
    return "Nombre completo: " + nombreCompleto + ", Teléfono: " + telefono + ", Edad: " + to_string(edad) + ", DNI: " + dni + ", Cuenta bancaria: " + cuentaB->pasarACadena(); // Añadimos DNI a la cadena
}
