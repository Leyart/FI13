//============================================================================
// Name        : UsoGoTo.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {          // somma solo i numeri positivi immessi
	int i, x, somma = 0, n = 10;
	for (i = 0; i < n; i++) {
		cout << "passo " << i+1 << " immettere un intero: " << endl;
		cin >> x;
		if (x < 0)
			continue;
		if (x == 0)
			goto finito;
		somma += x;
	}
	finito: cout << "Finito! La somma dei numeri positivi vale:" << somma << endl;
	return 0;
}
