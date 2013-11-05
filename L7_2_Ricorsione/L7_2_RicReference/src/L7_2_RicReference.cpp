//============================================================================
// Name        : L7_2_RicReference.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void incrementa(int &n, int m) {
	if (m != 0) {
		n++;
		incrementa(n, m - 1);
	}
}

int main() {
	cout << "Inserire due numeri" << endl;
	int numero, volte;
	cin >> numero >> volte;
	incrementa(numero, volte);
	cout << numero;
	return 0;
}
