//============================================================================
// Name        : L6_1_ArrayIstogramma.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;
const int size = 10;

int orizzontale() {

	int arr[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < size; ++i) {
		for (int j = 1; j <= arr[i]; ++j)
			cout << "*";
		cout << '\n';
	}
	return 0;
}

int verticale() {
	int arr[size] = { 1, 4, 3, 10, 5, 6, 7, 8, 9, 2 };
	int max = arr[0];
	cout << "Istogramma Verticale" << endl;

	for (int k = 1; k < size; ++k)
		if (arr[k] > max)
			max = arr[k];
	for (int riga = max; riga >= 1; --riga) {
		for (int col = 0; col < size; ++col)
			if (arr[col] >= riga)
				cout << setw(3) << "*";
			else
				cout << setw(3) << " ";
		cout << '\n';
	}
	for (int i = 0; i < size; ++i) {
		cout << setw(3) << i;
	}
	cout << '\n';

	for (int i = 0; i < size; ++i) {
		cout << setw(3) << arr[i];
	}
	return 0;
}

int main() {
	// orizzontale();
	verticale();
}
