//============================================================================
// Name        : SommaBlocchi.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int num, sum = 0;
	cout << "Inserire un numero, -1 termina, 0 termina gruppo: " << endl;
	cin >> num;
	while (num != -1) { // finché ci sono gruppi
		sum=0;
		while(num != -1 && num != 0) {// finché ci sono numeri nel gruppo
			sum += num;
			cout << "inserire un numero, -1 termina, 0 termina gruppo: " << endl;
			cin >> num;
		}
		cout << "Somma: " << sum << endl; // stampa la somma del gruppo appena terminato
		cout << "Inserire un numero, -1 termina, 0 termina gruppo: " << endl;
		cin >> num;
	}
	cout << "Grazie e alla prossima!!" << endl;
			return 0;
}
