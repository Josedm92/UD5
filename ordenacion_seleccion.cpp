//Programa que ordena mediante selección los valores de un vector.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Creación de la función.

/*
 * @brief Módulo que ordena los valores de un vector mediante el proceso de selección.
 * @param double v[], int util_v Vector con los elementos introducidos Y el tamaño útil del vector.
 * @return void No devuelve ningún valor puesto que cambia los valores en el vector pasado por referencia.
 * @pre v[util_v]	.
 * @ver 1.0.
 * @author Josedm92.
 */
void Ord_Seleccion (double v[], int util_v) {
	int pos_min;
	double aux;

	for (int i=0; i<util_v-1; i++) {
		pos_min=i;
		for (int j=i+1; j<util_v; j++) {
			if (v[j]<v[pos_min]) {
				pos_min=j;
			}
		}
		aux=v[i];
		v[i]=v[pos_min];
		v[pos_min]=aux;
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
	
	Ord_Seleccion(v,util_v);

	cout << "El vector ordenado es: ";
	for (int i=0; i<util_v; i++) {
		cout << v[i] << " ";
		} 
	cout << endl;
	
}