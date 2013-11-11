//============================================================================
// Name        : L6_4_MatriciSpirale.cpp
// Author      : Roman Fedorov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int const MAT_SIZE = 5;

int main() {
	int m1[MAT_SIZE][MAT_SIZE] = {
			{1,2,3,4,5},
			{16,17,18,19,6},
			{15,24,25,20,7},
			{14,23,22,21,8},
			{13,12,11,10,9}
	};
	int m2[MAT_SIZE][MAT_SIZE] = {
			{9,8,7,6,5},
			{10,21,20,19,4},
			{11,22,25,18,3},
			{12,23,24,17,2},
			{13,14,15,16,1}
	};
	int r = 0, c = 0;
	int r2 = MAT_SIZE - 1, c2 = MAT_SIZE - 1;
	int i = 0;
	bool uguali = true;
	while (i < MAT_SIZE*MAT_SIZE)
	{
		while (c < MAT_SIZE - r)
		{
			if (m1[r][c] != m2[r2][c2])	uguali = false;
			c++; //Matrice 1, ci si muove a destra
			r2--; //=> Matrice 2, ci si muove in alto
			i++;
		}
		c--;
		r++;
		r2++;
		c2--;

		while (r <= c)
		{
			if (m1[r][c] != m2[r2][c2])	uguali = false;
			r++; //Matrice 1, ci si muove in basso
			c2--; //=> Matrice 2, ci si muove a sinistra
			i++;
		}
		r--;
		c--;
		c2++;
		r2++;

		while (c >= MAT_SIZE - r - 1)
		{
			if (m1[r][c] != m2[r2][c2])	uguali = false;
			c--; //Matrice 1, ci si muove a sinistra
			r2++; //=> Matrice 2, ci si muove in basso
			i++;
		}
		c++;
		r--;
		r2--;
		c2++;

		while (r > c)
		{
			if (m1[r][c] != m2[r2][c2])	uguali = false;
			r--; //Matrice 1, ci si muove in alto
			c2++; //=> Matrice 2, ci si muove a destra
			i++;
		}
		r++;
		c++;
		c2--;
		r2--;
	}

	if (uguali)
	{
		cout << "Le matrici sono uguali se percorsi nei sensi opposti." << endl;
	}
	else
	{
		cout << "Le matrici non sono uguali se percorsi nei sensi opposti." << endl;
	}
	return 0;
}
