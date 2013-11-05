//============================================================================
// Name        : L7_2_PalinRicorsivo.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

bool palindroma(string par, int da, int a) {
	if (da >= a)
		return true;
	else
		return (par[da] == par[a] && palindroma(par, da + 1, a - 1));
}

int main() {
	string parola;
	cout << "Inserisci la parola" << endl;
	cin >> parola;
	bool risultato = palindroma(parola,0,parola.size()-1);
	if (risultato)    // se vale true non si sono riscontrati caratteri discordi
		cout << "La parola " << parola << " è palindroma" << endl;
	else
		cout << "La parola " << parola << " NON è palindroma" << endl;
	return 0;
}
