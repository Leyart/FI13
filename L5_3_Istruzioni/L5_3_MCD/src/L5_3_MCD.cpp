//============================================================================
// Name        : MCD.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int mcd1() {
	int x = 1;
	int mcd = 1;
	int a, b, min;
	cout << "Inserisci due numeri maggiori di zero: ";
	cin >> a >> b;
	if (a < b)            // Trovo il più piccolo tra a e b
		min = a;
	else
		min = b;
	while (x < min) {     // Verifico tutti i numeri tra 2 e min
		++x;              // Prima incremento poi verifico
		if ((a % x) == 0 && (b % x) == 0)
			mcd = x;
	}
	cout << "Il MCD tra " << a << " e " << b << " è: " << mcd;

	return 0;
}

int mcd2() {
	int x = 1;
	int mcd = 1;
	int a, b, min;
	cout << "SECONDA VERSIONE" << endl;
	cout << "Inserisci due numeri maggiori di zero: ";
	cin >> a >> b;
	if (a < b)                         // Trovo il più piccolo tra a e b
		min = a;
	else
		min = b;
	while (x <= min) {                 // Verifico tutti i numeri tra 2 e min
		if ((a % x) == 0 && (b % x) == 0)  // Prima verifico
			mcd = x;
		++x;                           // Poi incremento
	}
	cout << "Il MCD tra " << a << " e " << b << " è: " << mcd;

	return 0;
}

int mcd3() { // Si scandiscono i naturali diminuendo a partire dal minimo tra a e b.
             // Il primo divisore comune trovato è il MCD
	int mcd = 1;
	int a, b, x;
	cout << "TERZA VERSIONE" << endl;
	cout << "Inserisci due numeri maggiori di zero: ";
	cin >> a >> b;
	if (a < b)                         // Trovo il più piccolo tra a e b
		x = a;
	else
		x = b;                         // e lo metto in x
	while (!((a % x) == 0 && (b % x) == 0)) { // Verifico tutti i numeri tra min  e 1
		--x;                           // Poi decremento
	}
	mcd = x;                           // Il primo che trovo è MCD
	cout << "Il MCD tra " << a << " e " << b << " è: " << mcd;
	return 0;
}

int mcd4() { // Si scandiscono i naturali diminuendo a partire dal minimo tra a e b.
             // Il primo divisore comune trovato è il MCD
	int mcd = 1;
	int a, b, x;
	cout << "QUARTA VERSIONE" << endl;
	cout << "Inserisci due numeri maggiori di zero: ";
	cin >> a >> b;
	if (a < b)                         // Trovo il più piccolo tra a e b
		x = a;
	else
		x = b;                         // e lo metto in x
	while ((a % x) != 0 || (b % x) != 0) { // Verifico tutti i numeri tra min  e 1
		--x;                               // Poi decremento
	}
	mcd = x;                           // Il primo che trovo è MCD
	cout << "Il MCD tra " << a << " e " << b << " è: " << mcd;
	return 0;
}

int euclide() {

	int mcd;
	int a, b;
	cout << "VERSIONE ALGORITMO DI EUCLIDE" <<
	        " Inserisci due numeri maggiori di zero: " << endl;
	cin >> a >> b;
	while (a != b) {
	  if (a > b)
		a = a-b;
	  else
		b = b-a;
	}
	mcd = a;                           // All'uscita dal ciclo a e b sono uguali
	cout << "Il MCD è: " << mcd << endl;
	return 0;
}


int main() {

	//mcd1();
	//mcd2();
	//mcd3();
	//mcd4();
	euclide();
	return 0;
}
