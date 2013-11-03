//============================================================================
// Name        : L7_1_Potenza.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

double potenza (double base, int esp);

int main() {
	float numero;
	cout << "Inserire un numero reale come base" << endl;
	cin >> numero;
	int esponente;
	cout << "Inserire un numero intero come esponente" << endl;
	cin >> esponente;
	cout << endl << numero  << " elevato a " << esponente << " vale " << potenza(numero, esponente) << endl;
	return 0;
}

double potenza (double base, int esp) {
		double ris = 1.0;
   	      for (int i = 0; i < esp; ++i)
   	  	ris = ris * base;

		return ris;
}
