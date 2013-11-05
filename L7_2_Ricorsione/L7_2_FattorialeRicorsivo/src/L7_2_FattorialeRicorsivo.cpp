//============================================================================
// Name        : 7_2_FattorialeRicorsivo.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int fattorialeIter(int n) {
	int fatt = 1;
	for (; n > 1; --n) // non serve contatore, uso n
		fatt *= n;
	return fatt;
}

int fattorialeRic(int n) {
	if (n == 0)
		return 1;
	else {
		int temp = n * fattorialeRic(n - 1);
		return temp;
	}
}

int main() {
	int numero;
	cin >> numero;
	cout << "Fattoriale ricorsivo: " << fattorialeRic(numero) << endl;
	return 0;
}

