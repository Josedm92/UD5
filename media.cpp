//Programa que pide las notas de alumnos y hace la media utilizando vectores.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	//Declaración de variables.
	const int numeronotas=5;
	double notas[numeronotas], media=0; 
	
	//Pedimos un número por pantalla.
	for (int i=0; i<numeronotas; i++) {
		cout << "Introduzca la nota del alumno " << i+1 << " :";
		cin >> notas[i];
	}
	
	for (int i=0; i<numeronotas; i++) {
		media+=notas[i];
	}
	
	media/=numeronotas;

	cout << "\nLa nota media de los alumonos es: " << media << endl; 
}