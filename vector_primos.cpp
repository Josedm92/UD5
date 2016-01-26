//Programa que indica cuáles de los números introducidos en un vector son primos.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
using namespace std; //Sentencia obligatoria.

//Creación de la función.

/*
 * @brief Módulo que indica si un número es primo o no.
 * @param int n Número a comprobar.
 * @return bool primo Devuelve una booleana que indica si el número es primo o no.
 * @ver 1.0.
 * @author Josedm92.
 */
int Es_Primo (int n) {
	bool primo=true;
	for (int divisor=2; divisor<=(n/2) && primo==true; divisor++) { 
		if (n%divisor==0) { 
			primo=false;
		}
	}
		
	return primo;
}

/*
 * @brief Módulo que saca por pantalla los números primos en un vector.
 * @param double v[], int util_v Vector con los elementos introducidos y el tamaño útil del vector.
 * @return void No devuelve ningún valor puesto que en la propia función imprime por pantalla el resultado.
 * @pre v[util_v].
 * @ver 1.0.
 * @author Josedm92.
 */
void Saca_Primos (double v[], int util_v) {
	for (int i=1; i<util_v; i++) {
		if (Es_Primo(v[i])==true) { 
			cout << "El número " << v[i] << " es primo." << endl;
		} 
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

	Saca_Primos(v,util_v);
}