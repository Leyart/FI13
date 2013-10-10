//============================================================================
// Name        : MediaDiNumeri.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int contatore = 0, voto = 0;
	float media = 0.0, totale = 0.0;
	cout << "Inserisci una serie di numeri; ctl-z per terminare" << endl;
	cout << "Prox voto: " << endl;
	while (cin >> voto) {
		totale += voto;
		++contatore;
		cout << "Prossimo voto: " << endl;
	}
	if (contatore > 0) {
		media = totale / contatore;
		cout << endl << "Numero voti inseriti: " << contatore
				<< " Somma numeri inseriti: " << totale << " Media dei voti: "
				<< media << endl;
	} else
		cout << "Serie vuota" << endl;
	return 0;
}
