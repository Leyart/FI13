//============================================================================
// Name        : L6_2_ProdottoScalare.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> a, b;
	int valore, lunghezza, prodotto = 0;
	cout << endl << "Inserisci la lunghezza dei vettori: " << endl;
	cin >> lunghezza;
	cout << endl << "Inserisci gli elementi di a: " << endl;
	for (int i = 0; i < lunghezza; ++i) {
		cin >> valore;
		a.push_back(valore);
	}
	cout << endl << "Inserisci gli elementi di b: " << endl;
	for (int i = 0; i < lunghezza; ++i) {
		cin >> valore;
		b.push_back(valore);
		prodotto += a[i] * b[i];
	}
	cout << "Il prodotto scalare vale: " << prodotto << endl;
	return 0;
}
