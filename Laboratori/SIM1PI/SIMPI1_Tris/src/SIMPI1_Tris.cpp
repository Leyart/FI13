//============================================================================
// Name        : Tris.cpp
// Author      : Roman Fedorov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int const DIM = 3;

void stampaMatrice(int mat[DIM][DIM])
{
	for (int r = 0; r< DIM; r++)
	{
		for (int c = 0; c < DIM; c++)
		{
			cout << mat[r][c] << " ";
		}
		cout << endl;
	}
}

bool controllaColonna(int mat[DIM][DIM], int g, int c)
{
	int freq[3] = {0, 0, 0};
	for (int r = 0; r < DIM; r++)
	{
		freq[mat[r][c]]++;
	}
	if ( (freq[0] == 1) && (freq[g] == DIM-1))
	{
		for (int r = 0; r < DIM; r++)
		{
			mat[r][c] = g;
		}
		return true;
	}

	return false;
}

bool controllaRiga(int mat[DIM][DIM], int g, int r)
{
	int freq[3] = {0, 0, 0};
	for (int c = 0; c < DIM; c++)
	{
		freq[mat[r][c]]++;
	}
	if ( (freq[0] == 1) && (freq[g] == DIM-1))
	{
		for (int c = 0; c < DIM; c++)
		{
			mat[r][c] = g;
		}
		return true;
	}

	return false;
}

bool controllaDiagonale(int mat[DIM][DIM], int g, int d)
{
	//d = 1 o 2
	int freq[3] = {0, 0, 0};
	for (int r = 0; r < DIM; r++)
	{
		int c;
		if (d == 1)
		{
			c = r;
		}
		else
		{
			c = DIM - r - 1;
		}
		freq[mat[r][c]]++;
	}
	if ( (freq[0] == 1) && (freq[g] == DIM-1))
	{
		for (int r = 0; r < DIM; r++)
		{
			int c;
			if (d == 1)
			{
				c = r;
			}
			else
			{
				c = DIM - r - 1;
			}
			mat[r][c] = g;
		}
		return true;
	}

	return false;
}

int main() {
	bool vinto = false;
	int g;
	int m[DIM][DIM];
	for (int r = 0;r < DIM ; r++) {
		for (int c = 0;c < DIM ;c++ ) {
			cout << "Inserisci valore (riga " << r <<", colonna "<<c<<")" << endl;
			cin >> m[r][c];
		}
	}
	stampaMatrice(m);
	cout << "Inserisci il numero del giocatore" << endl;
	cin >> g;
	for (int i = 0; i < DIM; i++)
	{
		//controllo le righe
		if (controllaRiga(m, g, i))
		{
			cout << "Il giocatore " << g << " puo' vincere in questo modo:" << endl;
			stampaMatrice(m);
			vinto = true;
		}
	}

	for (int i = 0; i < DIM; i++)
	{
		//controllo le righe
		if (controllaColonna(m, g, i))
		{
			cout << "Il giocatore " << g << " puo' vincere in questo modo:" << endl;
			stampaMatrice(m);
			vinto = true;
		}
	}

	for (int i = 1; i < 3; i++)
	{
		//controllo le righe
		if (controllaDiagonale(m, g, i))
		{
			cout << "Il giocatore " << g << " puo' vincere in questo modo:" << endl;
			stampaMatrice(m);
			vinto = true;
		}
	}

	if (vinto == false)
	{
		cout << "Il giocatore "<< g<< " non puo' vincere in una mossa" << endl;
	}

	return 0;
}
