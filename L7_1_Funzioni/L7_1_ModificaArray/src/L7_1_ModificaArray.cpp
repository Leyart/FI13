//============================================================================
// Name        : L7_1_ModificaArray.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
const int size = 4;

void modificaInt(int i) {
	i = i + 100;
}

void modificaArray(int vett[], int dim) {
	for (int i = 0; i < dim; i++)
		vett[i] += 100;
}

int main() {
	int a = 0,  v[size] = { 0, 1, 2, 3 };
	cout << "Valori prima" << endl;
	cout << "  a = " << a << endl;
	for (int i = 0; i < size; ++i)
		cout << "  v[" << i << "] = " << v[i] << endl;
	cout << "Chiamo le funzioni..." << endl;
	modificaInt(a);
	modificaArray(v, 4);
	cout << "Valori dopo" << endl;
	cout << "  a = " << a << endl;
	for (int i = 0; i < size; ++i)
		cout << "  v[" << i << "] = " << v[i] << endl;
	return 0;
}
