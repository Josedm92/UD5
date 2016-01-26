//Programa que busca de manera secuencial un valor en un vector.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Creación de la función.
/*
 * @brief Módulo que busca un elemento en un vector de manera secuencial.
 * @param double v[], int util_v, double buscado Vector con los elementos introducidos, el tamaño útil del vector y el número a buscar.
 * @return posicion, -1 En caso de encontrar el número en el vector devuelve su posición dentro del mismo, en caso contrario devuelve -1.
 * @pre v[util_v].
 * @ver 1.0.
 * @author Josedm92.
 */
int BuscaSec (const double v[], int util_v, double buscado) {
	int i, posicion;
	bool encontrado;

	i=0;
	encontrado=false;
	while ((i<util_v) && !encontrado) {
		if (v[i] == buscado){
			posicion=i;
			encontrado=true;
		} else {
			i++;
		}
	}

	if (encontrado) {
		return posicion;
	} else {
		return -1;
	}
}

//Inicio del programa
int main () {
	//Declaración de variables.
	const int capacidad=100;
	double v[capacidad], buscado=0.0; 
	int numeroutil;

	//Pedimos por pantalla el tamaño del vector.
	do {
		cout << "Introduzca el tamaño del vector a utilizar (Entre 1 y " << capacidad << "): ";
		cin >> numeroutil;
	} while (numeroutil<1 || numeroutil>capacidad);

	//Pedimos por pantalla los valores del vector.
	for (int i=0; i<numeroutil; i++) {
		cout << "Introduzca el número " << i+1 << ": ";
		cin >> v[i];
	}
	
	cout << "Introduzca el número a buscar: ";
	cin >> buscado;

	if (BuscaSec(v,numeroutil, buscado)==-1) {
		cout << "El número " << buscado << " no se encuentra en el vector indicado." << endl;
	} else {
		cout << "El número " << buscado << " se ha encontrado en la posicion " << BuscaSec(v,numeroutil, buscado)+1 << " del vector indicado." << endl;
	}
}