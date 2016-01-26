//Programa que ordena mediante inserción los valores de un vector.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Creación de la función.

/*
 * @brief Módulo que ordena los valores de un vector mediante el proceso de inserción.
 * @param double v[], int util_v Vector con los elementos introducidos y el tamaño útil del vector.
 * @return void No devuelve ningún valor puesto que cambia los valores en el vector pasado por referencia.
 * @pre v[util_v].
 * @ver 1.0.
 * @author Josedm92.
 */
void Ord_Insercion (double v[], int util_v) {
	int izda, i;
	double valor;

	for (izda=1; izda<util_v; izda++) {
		valor=v[izda];

		for (i=izda; i>0 && valor<v[i-1];i--) {
			v[i]=v[i-1];
		}

		v[i]=valor;
	}
}

//Inicio del programa
int main () {
	//Declaración de variables.
	const int DIM_V=100;
	double v[DIM_V]; 
	int util_v;

	//Pedimos por pantalla el tamaño del vector.
	do {
		cout << "Introduzca el tamaño del vector a utilizar (Entre 1 y " << DIM_V << "): ";
		cin >> util_v;
	} while (util_v<1 || util_v>DIM_V);

	//Pedimos por pantalla los valores del vector.
	for (int i=0; i<util_v; i++) {
		cout << "Introduzca el número " << i+1 << ": ";
		cin >> v[i];
	}
	
	cout << "El vector introducido es: ";
	for (int i=0; i<util_v; i++) {
		cout << v[i] << " ";
		} 
	cout << endl;
	
	Ord_Insercion(v,util_v);

	cout << "El vector ordenado es: ";
	for (int i=0; i<util_v; i++) {
		cout << v[i] << " ";
		} 
	cout << endl;
	
}