//============================================================================
// Name        : L6_1_RicercaBinaria.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
const int size = 10;

int main() {
	int dato, posizione;
	bool trovato = false;
	int array[size] = { -6, -2, -1, 4, 5, 6, 7, 8, 9, 10 };
	cout << "Inserisci il numero da ricercare: " << endl;
	cin >> dato;
	int low = 0, high = size - 1, mid;
	while (low <= high && !trovato) {
		mid = (low + high) / 2;
		if (array[mid] == dato) {
			trovato = true;
			posizione = mid;
		} else if (array[mid] > dato)
			high = mid - 1;
		else
			// array[mid] < dato
			low = mid + 1;
	}
	if (trovato)
		cout << "Risultato trovato all'indice: " << posizione << endl;
	else
		cout << "Risultato non presente" << endl;
	return 0;
}
