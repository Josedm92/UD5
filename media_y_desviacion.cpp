//Programa que pide las notas de alumnos y hace la media y la desviación típica utilizando módulos y vectores de tamaño útil.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
#include <cmath> //Incluimos librería cmath para usar sqrt.
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

/*
 * @brief Módulo que calcula la desviación típica partiendo de la nota media.
 * @param double notas[], int numeroutil, double media Vector con las notas introducidas, el número de notas que contiene el vector y la media calculada.
 * @return media Devuelve la desviación típica calculada.
 * @pre notas[numeroutil], media=Media(notas,numeroutil).
 * @ver 1.0.
 * @author Josedm92.
 */

double Desviacion (double notas[], int numeroutil, double media) {
	double desviacion=0.0;
	
	for (int i=0; i<numeroutil; i++) {
		desviacion+=pow((notas[i]-media),2);
	}
	
	desviacion=sqrt((desviacion)/(media-1));

	return desviacion;
}

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
	
	media=Media(notas,numeroutil);

	cout << "\nLa nota media de los alumnos es: " << media << endl; 
	
	cout << "\nLa desviación típica de la nota media de los alumnos es: " << Desviacion(notas, numeroutil, media) << endl; 

}