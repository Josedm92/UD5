//Programa que elimina los elementos consecutivos repetidos de un vector.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Creación de las funciones.

/*
 * @brief Módulo que imprime los valores de un vector.
 * @param const char v[], int util Vector a imprimir y tamaño útil del mismo.
 * @return void No devuelve ningún valor puesto que imprime los valores dentro del propio módulo.
 * @pre v[util].
 * @ver 1.0.
 * @author Josedm92.
 */
void Imprime_Vector (const char v[], int util) {
	for (int i=0; i<util; i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

/*
 * @brief Módulo que elimina elementos consecutivos repetidos y almacena el resultado en un nuevo vector.
 * @param const char original[], int util_original, char destino[], int &util_destino Vector inicial, tamaño útil del vector inicial, 
 	vector de destino y tamaño útil del vector de destino.
 * @return void No devuelve ningún valor puesto que el vector de destino y su tamaño se le pasan a la función por referencia.
 * @pre original[util_original].
 * @ver 1.0.
 * @author Josedm92.
 */
void Quita_Repetidos (const char original[], int util_original, char destino[], int &util_destino) {
	destino[0]=original[0];
	util_destino=1;

	for (int i=1; i<util_original; i++) {
		if (original[i] != original[i-1]) {
			destino[util_destino] = original[i];
			util_destino++;
		}
	}
}

//Inicio del programa
int main () {
	const int DIM=100;
	char entrada[DIM], salida[DIM];
	int util_original=0, util_destino=0;

	//Pedimos por pantalla el tamaño del vector.
	do {
		cout << "Introduzca el tamaño del vector a utilizar (Entre 1 y " << DIM << "): ";
		cin >> util_original;
	} while (util_original<1 || util_original>DIM);

	//Pedimos por pantalla los valores del vector.
	for (int i=0; i<util_original; i++) {
		cout << "Introduzca el número " << i+1 << ": ";
		cin >> entrada[i];
	}
	

	Quita_Repetidos(entrada, util_original, salida, util_destino);
	cout << "El resultado tras eliminar los elementos repetidos es: ";
	Imprime_Vector(salida, util_destino);
}