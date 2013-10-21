//============================================================================
// Name        : L6_2_MatriciQuadrate.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
const int MAXDIM = 4; // massima dimensione dell'array che ospita la matrice

int main() {          // esempio di inizializzazione della matrice nel programma
	int dim = MAXDIM, riga = 0, col = 0;
	int matrice[MAXDIM][MAXDIM] = { { 21, 1, 2, 33 }, { 3, 4, 6, 4 }, { 7, 8,
			10, 5 }, { 17, 18, 0, 51 } };
	int matriceT[MAXDIM][MAXDIM] = { 0 }; // tutti gli elementi inizializzati a 0
	bool diagonale = true, simmetrica = true;
	cout << "MATRICI QUADRATE" << endl;
	for (riga = 0; riga < dim; ++riga)  // verifica simmetria
		for (col = 0; col < riga; ++col)
			if (matrice[riga][col] != matrice[col][riga])
				simmetrica = false;
	for (riga = 0; diagonale && riga < dim; ++riga)  // verifica diagonalità
		for (col = 0; diagonale && col < dim; ++col)
			if (riga != col && matrice[riga][col] != 0)
				diagonale = false;
	cout << "La matrice " << (simmetrica ? "è" : "non è") << " simmetrica"
			<< endl;
	cout << "La matrice " << (diagonale ? "è" : "non è") << " diagonale"
			<< endl;
	for (riga = 0; riga < dim; ++riga)  // calcolo della trasposta
		for (col = 0; col < dim; ++col)
			matriceT[col][riga] = matrice[riga][col];
	cout << "Matrice trasposta" << endl;
	for (riga = 0; riga < dim; ++riga)  // stampa della trasposta
		for (col = 0; col < dim; ++col) {
			cout << matriceT[riga][col] << ' ';
			if (col == dim - 1)
				cout << '\n';
		}

	return 0;
}

int main2() {             // esempio di input della matrice da parte dell'utente
	int dim, riga = 0, col = 0;
	int matrice[MAXDIM][MAXDIM], matriceT[MAXDIM][MAXDIM]; // matrice realizzata con array di array di interi
	bool diagonale = true, simmetrica = true;
	cout << "MATRICI QUADRATE" << endl;
	cout << "Inserisci un numero righe inferiore a " << MAXDIM << endl;
	cin >> dim;
	if (dim <= MAXDIM) {
		cout << "Inserisci " << dim * dim << " valori" << endl;
		for (riga = 0; riga < dim; ++riga)
			for (col = 0; col < dim; ++col)
				cin >> matrice[riga][col];
		for (riga = 0; riga < dim; ++riga)  // verifica simmetria
			for (col = 0; col < riga; ++col)
				if (matrice[riga][col] != matrice[col][riga])
					simmetrica = false;
		for (riga = 0; diagonale && riga < dim; ++riga) // verifica diagonalità
			for (col = 0; diagonale && col < dim; ++col)
				if (riga != col && matrice[riga][col] != 0)
					diagonale = false;
		cout << "La matrice " << (simmetrica ? "è" : "non è") << " simmetrica"
				<< endl;
		cout << "La matrice " << (diagonale ? "è" : "non è") << " diagonale"
				<< endl;
		for (riga = 0; riga < dim; ++riga) // calcolo della trasposta
			for (col = 0; col < dim; ++col)
				matriceT[col][riga] = matrice[riga][col];
		cout << "Matrice trasposta" << endl;
		for (riga = 0; riga < dim; ++riga) // stampa della trasposta
			for (col = 0; col < dim; ++col) {
				cout << matriceT[riga][col] << ' ';
				if (col == dim - 1)
					cout << '\n';
			}
	} else
		cout << "LE DIMENSIONI DEVONO ESSERE MINORI DI  " << MAXDIM << endl;
	return 0;
}
