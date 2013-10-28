//============================================================================
// Name        : SommaNInteri.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main1() {
	int n;
	cout << "Versione con ciclo a condizione iniziale"
	 << "\nInserisci n: " << endl;
	cin >> n;
	if (n >= 0) {
		int somma = 0, i = 1;  // dichiarazione vicino all'uso
		while (i <= n) {
			somma += i;
			++i;
		}
		cout << "La somma vale: " << somma << endl;
	}
	return 0;
}

int main2() {
	int n;
	cout << "Versione con ciclo a condizione finale"
	     << "\nInserisci n: " << endl;
	cin >> n;
	if (n > 0) {
		int somma = 0, i = 1;
		do {                   // ciclo a condizione finale
			somma += i;
			++i;
		} while (i <= n);

		cout << "La somma vale: " << somma << endl;
	}
	return 0;
}

int main3() {
	int n, somma=0;
	cout << "Versione con ciclo a conteggio"
	     << "\nInserisci n: " << endl;
	cin >> n;
	if (n >= 0) {
		somma = 0;
		for (int i = 1; i <= n; ++i) { /* ciclo a conteggio*/
			somma += i;
		}
		cout << "La somma vale: " << somma << endl;
	}
	return 0;
}

int main() {
	//main1();
	main2();
	//main3();
	return 0;
}
