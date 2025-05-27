/*
 * patinete.h
 *
 *  Created on: 24 feb. 2025
 *      Author: alumno
 */

#ifndef PATINETE_H
#define PATINETE_H

#include <string>
#include "Usuario.h" // [cite: 22]

using namespace std;

class Patinete {
private:
    string identificador;
    string marca;
    string modelo;
    bool averiado;
    bool disponible;
    Usuario* usuarioActual; // [cite: 11]

public:
    Patinete(); // Constructor por defecto [cite: 12]
    Patinete(const string& identificador, const string& marca, const string& modelo); // Constructor parametrizado [cite: 12]
    Patinete(const Patinete& otro); // Constructor por copia [cite: 12]
    ~Patinete(); // Destructor [cite: 15]

    // Métodos de acceso (getters y setters) [cite: 13]
    string getIdentificador() const;
    void setIdentificador(const string& identificador);
    string getMarca() const;
    void setMarca(const string& marca);
    string getModelo() const;
    void setModelo(const string& modelo);
    bool isAveriado() const;
    void setAveriado(bool averiado);
    bool isDisponible() const;
    void setDisponible(bool disponible);
    Usuario* getUsuarioActual() const;
    void setUsuarioActual(Usuario* usuarioActual);

    // Método mostrar [cite: 14]
    void mostrar() const;

    // Sobrecarga del operador == [cite: 15]
    bool operator==(const Patinete& otro) const;
};

#endif // PATINETE_H
