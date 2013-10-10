//============================================================================
// Name        : StampaPari.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


int main() {   // Stampa dei numeri pari minori di N -- con errori!
   int n, pari = 0; // considera lo 0 pari
   cout << "Dammi un intero positivo : " << endl;
   cin >> n;
   while ( pari != n ) {    // che succede se l'utente inserisce un numero dispari
 	cout << pari << endl;
	pari += 2;
   }
   return 0;
}
