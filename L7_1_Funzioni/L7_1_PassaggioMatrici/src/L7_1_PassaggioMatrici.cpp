//============================================================================
// Name        : L7_1_1_PassaggioMatrici.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void stampaMatrice(int mat[][2], int r, int c) {
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j)
			cout << mat[i][j] << " ";
		cout << '\n';
	}
}

int main() {
	int matrice[2][2] = { 1, 2, 3, 4 };
	int matricebis[3][2] = {5,6,7,8,9,10};
	stampaMatrice(matrice, 2, 2);
	cout << endl;
	stampaMatrice(matricebis, 3, 2);
	return 0;
}
