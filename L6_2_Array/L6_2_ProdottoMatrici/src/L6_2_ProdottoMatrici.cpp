//============================================================================
// Name        : C6_2_ProdottoMatrici.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
const int MAXDIM = 4;

int main() {
	int righe1 = 0, righe2 = 0, col1 = 0, col2 = 0, riga, col;
	int matrice1[MAXDIM][MAXDIM], matrice2[MAXDIM][MAXDIM],
			prodotto[MAXDIM][MAXDIM] = { 0 };
	cout << "PRODOTTO MATRICI" << endl;
	cout << "Inserisci un numero righe e colonne inferiore a " << MAXDIM
			<< " per matrice1" << endl;
	cin >> righe1 >> col1;
	cout << "Inserisci un numero righe e colonne inferiore a " << MAXDIM
			<< " per matrice2" << endl;
	cin >> righe2 >> col2;
	if (righe1 <= MAXDIM && righe2 <= MAXDIM && col1 <= MAXDIM && col2 <= MAXDIM
			&& righe1 == col2) {
		cout << "Inserisci " << righe1 * col1 << " valori per matrice1" << endl;
		for (riga = 0; riga < righe1; ++riga)
			for (col = 0; col < col1; ++col)
				cin >> matrice1[riga][col];
		cout << "Inserisci " << righe2 * col2 << " valori per matrice2" << endl;
		for (riga = 0; riga < righe2; ++riga)
			for (col = 0; col < col2; ++col)
				cin >> matrice2[riga][col];
		for (riga = 0; riga < righe1; ++riga) // calcolo del prodotto
			for (col = 0; col < col2; ++col)
				for (int k = 0; k < righe2; ++k)
					prodotto[riga][col] += matrice1[riga][k] * matrice2[k][col];
		cout << "Matrice Prodotto" << endl;
		for (riga = 0; riga < righe1; ++riga) // stampa del prodotto
			for (col = 0; col < col2; ++col) {
				cout << prodotto[riga][col] << ' ';
				if (col == col2 - 1)
					cout << '\n';
			}
	} else if (righe1 == col2)
		cout << "DIMENSIONI DEVONO ESSERE MINORI DI  " << MAXDIM << endl;
	else
		cout << "NUMERO RIGHE MATRICE1 DIVERSO NUMERO COLONNE MATRICE2" << endl;
	return 0;
}
