//Programa que pide las notas de alumnos y hace la media utilizando módulos y vectores de tamaño útil.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Creación de la función.

/*
 * @brief Módulo que calcula la nota media.
 * @param double notas[], int numeroutil Vector con las notas introducidas y el número de notas que contiene el vector.
 * @return media Devuelve la media calculada.
 * @pre notas[numeroutil].
 * @ver 1.0.
 * @author Josedm92.
 */

double Media (double notas[], int numeroutil) {
	double media=0.0;

	for (int i=0; i<numeroutil; i++) {
		media+=notas[i];
	}
	
	media/=numeroutil;

	return media;
}

//Inicio del programa.
int main () {
	//Declaración de variables.
	const int numeronotas=100;
	double notas[numeronotas]; 
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
	
	cout << "\nLa nota media de los alumnos es: " << Media(notas,numeroutil) << endl; 
}