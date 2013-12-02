//============================================================================
// Name        : SOL1PI_BlackJack.cpp
// Author      : Roman Fedorov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int pescaUnaCarta()
{
	return rand() % 10 + 2;
}

int main() {
	srand(time(0));
	char gioca = 'S';
	while ( (gioca != 'n') && (gioca != 'N'))
	{
		int sommaGiocatore = 0, sommaBanco = 0;
		cout << "Benvenuto! La partita iniziera' con il pescaggio delle due carte:" << endl;
		for (int i = 0; i < 2; i++) {
			int carta = pescaUnaCarta();
			sommaGiocatore += carta;
			cout << "Hai pescato " << carta << ", puteggio corrente: " << sommaGiocatore << endl;
		}
		char pesca  = 'S';
		while ( (pesca != 'n') && (pesca != 'N') && (sommaGiocatore <= 21))
		{
			cout << "Vuoi pescare un altra carta? 'S' per si, 'N' per no" << endl;
			cin >> pesca;
			if ( (pesca != 'n') && (pesca != 'N'))
			{
				int carta = pescaUnaCarta();
				sommaGiocatore += carta;
				cout << "Hai pescato " << carta << ", puteggio corrente: " << sommaGiocatore << endl;
			}
		}
		if (sommaGiocatore > 21) {
			cout << "Hai superato 21, hai perso!" << endl;
		}
		else {
			while (sommaBanco <= 16) {
				int carta = pescaUnaCarta();
				sommaBanco += carta;
				cout << "Il banco ha pescato " << carta << ", puteggio corrente: " << sommaBanco << endl;
			}
			if (sommaBanco > 21) {
				cout << "Il banco ha superato 21, hai vinto!" << endl;
			}
			else {
				if (sommaBanco > sommaGiocatore) {
					cout << "Il punteggio del banco e' piu' alto, hai perso!" << endl;
				}
				else {
					if (sommaGiocatore > sommaBanco) {
						cout << "Il tuo punteggio e' piu' alto, hai vinto!" << endl;
					}
					else {
						cout << "Pareggio!" << endl;
					}
				}
			}

		}

		cout << "Vuoi fare un altra partita? 'S' per si, 'N' per no" << endl;
		cin >> gioca;
	}
	return 0;
}
