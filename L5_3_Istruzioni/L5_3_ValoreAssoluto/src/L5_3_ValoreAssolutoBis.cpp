//============================================================================
// Name        : ValoreAssoluto.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int numero, valass;  // dichiarazione delle variabili 
	cout << "Calcolo del Valore Assoluto " << "Inserisci Numero Intero: "
			<< endl;
	cin >> numero;	      // acquisizione valore 
	if (numero < 0)
		valass = -numero;
	else
		valass = numero;
	cout << "Numero: " << numero <<	       // output
			" Valore assoluto: " << valass << endl;      // output
	return 0;
}
