//============================================================================
// Name        : L7_1_FunzioniDialogo.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

char menu() {
	char ch;
	cout << "Premere A per inserire un num tra 0 e 10 e calcolarne il cubo"
			<< endl;
	cout << "Premere B per inserire un num tra 11 e 20 e calcolarne il quadrato"
			<< endl;
	cout << "Premere C per inserire un num tra 21 e 30 e calcolarne il doppio"
			<< endl;
	cout << "Premere Q per uscire" << endl;

	cin >> ch;
	return ch;
}

int leggi() {
	int v;
	cout << "Inserisci valore" << endl;
	cin >> v;
	return v;
}

int main() {
	char scelta;
	int valore, risultato;
	while (true) {  // menu, loop infinito
		scelta = menu();
		switch (scelta) {
		case 'a':
		case 'A':
			valore = leggi();
			risultato = valore * valore * valore;
			cout << "risultato = " << risultato << endl;
			break;
		case 'b':
		case 'B':
			valore = leggi();
			risultato = valore * valore;
			cout << "risultato = " << risultato << endl;
			break;
		case 'c':
		case 'C':
			valore = leggi();
			risultato = valore * 2;
			cout << "risultato = " << risultato << endl;
			break;
		case 'q':
		case 'Q':
			cout << "GRAZIE E ARRIVEDERCI";
			return 0;
		}
	}
}

int main2() {
	char scelta;
	int valore, risultato;
	while (true) {  // menu, loop infinito
		cout << "Premere A per inserire un num tra 0 e 10 e calcolarne il cubo"
				<< endl;
		cout
				<< "Premere B per inserire un num tra 11 e 20 e calcolarne il quadrato"
				<< endl;
		cout
				<< "Premere C per inserire un num tra 21 e 30 e calcolarne il doppio"
				<< endl;
		cout << "Premere Q per uscire" << endl;
		cin >> scelta;
		switch (scelta) {
		case 'a':
		case 'A':
			cout << "Inserisci valore" << endl;
			cin >> valore;
			risultato = valore * valore * valore;
			cout << "risultato = " << risultato << endl;
			break;
		case 'b':
		case 'B':
			cout << "Inserisci valore" << endl;
			cin >> valore;
			risultato = valore * valore;
			cout << "risultato = " << risultato << endl;
			break;
		case 'c':
		case 'C':
			cout << "Inserisci valore" << endl;
			cin >> valore;
			risultato = valore * 2;
			cout << "risultato = " << risultato << endl;
			break;
		case 'q':
		case 'Q':
			cout << "GRAZIE E ARRIVEDERCI";
			return 0;
		}
	}
	return 0;
}
