//============================================================================
// Name        : L6_2_SommaMatrici.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
const int MAXDIM = 4; // massima dimensione dell'array che ospita la matrice

int main() {
	int dim = MAXDIM, riga = 0, col = 0;
	int matrice1[MAXDIM][MAXDIM] = { { 1, 1, 1, 1 }, { 1, 1, 1, 1 }, { 1, 1, 1,
			1 }, { 1, 1, 1, 1 } };
	int matrice2[MAXDIM][MAXDIM] = { { 2, 2, 2, 2 }, { 2, 2, 2, 2 }, { 2, 2, 2,
			2 }, { 2, 2, 2, 2 } };
	int somma[MAXDIM][MAXDIM] = { 0 }; // tutti  inizializzati a 0
	for (riga = 0; riga < dim; ++riga)  // calcolo della somma
		for (col = 0; col < dim; ++col)
			somma[riga][col] = matrice1[riga][col] + matrice2[riga][col];
	cout << "Matrice Somma" << endl;
	for (riga = 0; riga < dim; ++riga)  // stampa della somma
		for (col = 0; col < dim; ++col) {
			cout << somma[riga][col] << ' ';
			if (col == dim - 1)
				cout << '\n';
		}
	return 0;
}
