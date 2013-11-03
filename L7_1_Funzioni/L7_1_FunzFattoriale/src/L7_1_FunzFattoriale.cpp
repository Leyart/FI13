//============================================================================
// Name        : L7_1_FunzFattoriale.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int fatt(int val) {
	int ris = 1;
	while (val > 1)
		ris *= val--; //assegna ris * val a ris e POI decrementa val
	return ris;
}

int main() {
	int numero;
	cout << "Inserire un numero positivo" << endl;
	cin >> numero;
	cout << "Il fattoriale di " << numero << " vale " << fatt(numero) << endl; // prints ASCII
	return 0;
}
