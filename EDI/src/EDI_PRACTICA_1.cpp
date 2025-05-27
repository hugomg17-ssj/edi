//============================================================================
// Name        : EDI_PRACTICA_1.cpp
// Author      : HUGO MARTÍN GABRIEL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;
#include "Usuario.h"
#include "Patinete.h"
#include "CuentaBancaria.h"

const int TAM=242;
typedef Usuario*Vector[TAM];

void leerFichero1() {
string linea;
int cont = 0;
ifstream fEnt;
fEnt.open("usuarios.csv");
	if (fEnt.is_open()) {
		getline(fEnt, linea); // lee la línea cabecera
		while (!fEnt.eof()) {
			getline(fEnt, linea);
			if (!fEnt.eof()) { // doble comprobación del eof
				cout << cont << " - " << linea << endl;
				cont++;
			}
		}
		fEnt.close();
	}else
cerr<<" Error al abrir el fichero"<<endl;
}

void leerFichero2() {
string linea,nombre,dni,email,telefono,edad,numCuenta,saldo;
int cont = 0;
ifstream fEnt;
fEnt.open("usuarios.csv");
	if (fEnt.is_open()) {
		getline(fEnt, linea); // lee la línea cabecera
		while (!fEnt.eof()) {
			getline(fEnt, nombre, ';');
			if (!fEnt.eof()) { // doble comprobación del eof
				getline (fEnt, dni, ';');
				getline (fEnt, email, ';');
				getline (fEnt, telefono, ';');
				getline (fEnt, edad, ';');
				getline (fEnt, numCuenta, ';');
				getline (fEnt, saldo);

				cout << cont << " - " << linea << endl;
				cout << "Nombre; "<<nombre<<" ";
				cout << "DNI; "<<dni<<" ";
				cout << "Email; "<<email<<" ";
				cout << "Teléfono; "<< telefono<<" ";
				cout << "Edad; "<<edad<<" ";
				cout << "Número de cuenta; "<<numCuenta<<" ";
				cout << "Saldo; "<<saldo<<" ";

				cont++;
			}
		}
		fEnt.close();
	}else
cerr<<" Error al abrir el fichero"<<endl;
}
Vector v;
void leerVector(Vector &v){

}

void mostarVector(Vector v){
	int i;
	for (i=0; i<TAM;i++){
		v[i]->mostrar();
	}

}

void destruirVector(Vector){
	int i;
	for (i=0; i<TAM;i++){
		delete v[i];
	}
}


void leerFichero3() {
string linea,nombre,dni,email,telefono,edad,numCuenta,saldo;
int cont = 0;
ifstream fEnt;
fEnt.open("usuarios.csv");
	if (fEnt.is_open()) {
		getline(fEnt, linea); // lee la línea cabecera
		while (!fEnt.eof()) {
			getline(fEnt, nombre, ';');
			if (!fEnt.eof()) { // doble comprobación del eof
				getline (fEnt, dni, ';');
				getline (fEnt, email, ';');
				getline (fEnt, telefono, ';');
				getline (fEnt, edad, ';');
				getline (fEnt, numCuenta, ';');
				getline (fEnt, saldo);

				cout << cont << " - " << linea << endl;
				cout << "Nombre; "<<nombre<<" ";
				cout << "DNI; "<<dni<<" ";
				cout << "Email; "<<email<<" ";
				cout << "Teléfono; "<< telefono<<" ";
				cout << "Edad; "<<edad<<" ";
				cout << "Número de cuenta; "<<numCuenta<<" ";
				cout << "Saldo; "<<saldo<<" ";

				cont++;
			}
		}
		fEnt.close();
	}else
cerr<<" Error al abrir el fichero"<<endl;
}
















int main() {
	leerFichero2();
	return 0;
}
