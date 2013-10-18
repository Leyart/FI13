//============================================================================
// Name        : L6_2_Palindrome.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	string parola;
	cout << "Inserisci la parola" << endl;
	cin >> parola;
	auto inizio = parola.begin(), fine = parola.end();
	--fine;                   // portiamo il cursore di destra sull'ultimo elemento
	while (*inizio == *fine && inizio < fine) {
		++inizio;
		--fine;
	}
	if (inizio >= fine)           // se vale true non si sono riscontrati caratteri discordi
		cout << "La parola " << parola << " è palindroma" << endl;
	else
		cout << "La parola " << parola << " NON è palindroma" << endl;
	cout << "ASCII" << endl; // prints ASCII
	return 0;
}
