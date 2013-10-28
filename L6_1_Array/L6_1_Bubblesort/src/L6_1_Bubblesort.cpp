//============================================================================
// Name        : L6_1_Bubblesort.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
const int size=5;

int main() {
	int  aux, array[size];

	cout << "Inserire gli elementi del vettore:" << endl;
	for (int k = 0; k < size; ++k)
		cin >> array[k];

	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < size - 1 - i; ++j) {
			if (array[j] > array[j + 1]) {    // se l'ordine è invertito
				aux = array[j + 1];     // scambia elementi consecutivi
				array[j + 1] = array[j];
				array[j] = aux;
			}
		}
	}
	cout << "Il vettore ordinato e’: " << endl;
	for (int h = 0; h < size; ++h)
		cout << array[h] << endl;

	return 0;
}
