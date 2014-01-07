//============================================================================
// Name        : LAB5_Labirinto.cpp
// Author      : Roman Fedorov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "utility_labirinto.h"
using namespace std;

void copiaMatrice(int sorgente[LAB_ALT][LAB_LUN], int destinazione[LAB_ALT][LAB_LUN])
{
	for (int i = 0; i < LAB_ALT; i++)
	{
		for (int i2 = 0; i2 < LAB_LUN; i2++)
		{
				destinazione[i][i2] = sorgente[i][i2];
		}
	}
}

bool trovaProssimoPasso(int m[LAB_ALT][LAB_LUN], int riga, int colonna, int rigaFine, int colonnaFine)
{
	if ( (riga == rigaFine) && (colonna == colonnaFine) ) {
//		m[riga][colonna] = 2;
		return true;
	}

	//controllo in alto
	if (riga > 0) {
		if ((m[riga - 1][colonna] == 0) || (m[riga - 1][colonna] == 3)) {
			int mat[LAB_ALT][LAB_LUN];
			copiaMatrice(m, mat);
			mat[riga][colonna] = 2;
			if (trovaProssimoPasso(mat, riga - 1, colonna, rigaFine, colonnaFine)) {
				copiaMatrice(mat, m);
				return true;
			}
		}
	}

	//controllo in basso
	if (riga < LAB_ALT - 1) {
		if ((m[riga + 1][colonna] == 0) || (m[riga + 1][colonna] == 3)) {
			int mat[LAB_ALT][LAB_LUN];
			copiaMatrice(m, mat);
			mat[riga][colonna] = 2;
			if (trovaProssimoPasso(mat, riga + 1, colonna, rigaFine, colonnaFine)) {
				copiaMatrice(mat, m);
				return true;
			}
		}
	}

	//controllo a sinistra
	if (colonna > 0) {
		if ((m[riga][colonna - 1] == 0) || (m[riga][colonna - 1] == 3)) {
			int mat[LAB_ALT][LAB_LUN];
			copiaMatrice(m, mat);
			mat[riga][colonna] = 2;
			if (trovaProssimoPasso(mat, riga, colonna - 1, rigaFine, colonnaFine)) {
				copiaMatrice(mat, m);
				return true;
			}
		}
	}

	//controllo a destra
	if (riga < LAB_LUN - 1) {
		if ((m[riga][colonna + 1] == 0) || (m[riga][colonna + 1] == 3)) {
			int mat[LAB_ALT][LAB_LUN];
			copiaMatrice(m, mat);
			mat[riga][colonna] = 2;
			if (trovaProssimoPasso(mat, riga, colonna + 1, rigaFine, colonnaFine)) {
				copiaMatrice(mat, m);
				return true;
			}
		}
	}

	return false;
}

int main()
{
	bool trovato = trovaProssimoPasso(labMat, 0, 19, 13, 19);
	stampaLabirinto(labMat);

	return 0;
}

