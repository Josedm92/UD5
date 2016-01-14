//Programa que pide las notas de alumnos y hace la media utilizando vectores de tamaño útil.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Inicio del programa.
int main () {
	//Declaración de variables.
	const int numeronotas=100;
	double notas[numeronotas], media=0.0; 
	int numeroutil;

	//Pedimos por pantalla el número de alumnos.
	do {
		cout << "Introduzca el número de alumnos (Entre 1 y " << numeronotas << "): ";
		cin >> numeroutil;
	} while (numeroutil<1 || numeroutil>numeronotas);


	//Pedimos un número por pantalla.
	for (int i=0; i<numeroutil; i++) {
		cout << "Introduzca la nota del alumno " << i+1 << ": ";
		cin >> notas[i];
	}
	
	for (int i=0; i<numeroutil; i++) {
		media+=notas[i];
	}
	
	media/=numeroutil;

	cout << "\nLa nota media de los alumnos es: " << media << endl; 
}