//============================================================================
// Name        : Sentinella.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int valore, sum = 0, num = 0, media = 0;
	const int sentinella = -1;
	cout << endl << "Fornisci valore da elaborare..." << endl;
	cout << "Se hai finito, fornisci " << sentinella << endl;
	cin >> valore;
	while (valore != sentinella) {
		sum += valore;
		++num;
		cout << endl << "Fornisci valore da elaborare..." << endl;
	    cout << "Se hai finito, fornisci " << sentinella << endl;
	    cin >> valore;
	}
	if (num > 0) {
		media = sum / num;
	    cout << "La media dei valori è " << media;
	}
	else
		cout << "Nessun valore immesso" << endl;
	return 0;
}
