//============================================================================
// Name        : L6_1_RicercaSeq.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
const int size = 10;
int main() {
	int dato, posizione = -1;
	int array[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "Inserisci il numero da ricercare: " << endl;
	cin >> dato;
	int i; // riusato al di fuori del ciclo for!
	for (i = 0; i < size; ++i) // riscrevetelo con ciclo while
		if (array[i] == dato) {
			posizione = i;
			break; // interrompe il ciclo
		}
	if (posizione != -1)
		cout << "Risultato trovato all'indice: " << i << endl;
	else
		cout << "Risultato non presente" << endl;
	return 0;
}
