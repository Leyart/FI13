//============================================================================
// Name        : L6_3_AssegnamantoStruct.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	struct {
		char via[20];
		int numero;
		int CAP;
		string citta;
	} indirizzo1, indirizzo2;
	strcpy(indirizzo1.via, "Ponzio");
	indirizzo1.numero = 35;
	indirizzo1.CAP = 20133;
	indirizzo1.citta = "Milano";
	cout << "RECORD 1: " << endl << indirizzo1.via << endl << indirizzo1.numero
			<< endl << indirizzo1.CAP << endl << indirizzo1.citta << endl;
	indirizzo2 = indirizzo1;
	cout << "RECORD 2: " << endl << indirizzo2.via << endl << indirizzo2.numero
			<< endl << indirizzo2.CAP << endl << indirizzo2.citta << endl;

	return 0;
}
