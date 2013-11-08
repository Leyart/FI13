//============================================================================
// Name        : LAB4_DoppiaPiramide.cpp
// Author      : Roman Fedorov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int alt1, alt2, altMax, i, i1, i2, iStampa;
	alt1 = 0;
	while (alt1 <= 0)
	{
		cout << "Inserisci l'altezza della prima piramide:" << endl;
		cin >> alt1;
		if (!cin)
		{
			cout << "Input non valido" << endl;
			return 0;
		}
	}
	alt2 = 0;
	while (alt2 <= 0)
	{
		cout << "Inserisci l'altezza della seconda piramide:" << endl;
		cin >> alt2;
		if (!cin)
		{
			cout << "Input non valido" << endl;
			return 0;
		}
	}

	if (alt1 > alt2)
		altMax = alt1;
	else
		altMax = alt2;

	for (i = 1; i <= altMax; i++)
	{
		i1 = i - (altMax - alt1); //come sarebbe i se stampassimo solo la prima piramide
		if (i1 <= 0)
		{
			//Su questa riga non c'e' ancora la prima piramide, quindi stampiamo gli spazi necessari per la seconda
			for (iStampa = 0; iStampa < 2*alt1 - 1; iStampa++)
				cout << " ";
		}
		else
		{
			//La piramide c'e', solita stampa degli asterischi
			for (iStampa = 0; iStampa < alt1 - i1; iStampa++)
				cout << " ";
			for (iStampa = 0; iStampa < 2*i1 - 1; iStampa++)
				cout << "*";
			for (iStampa = 0; iStampa < alt1 - i1; iStampa++)
				cout << " ";
		}
		i2 = i - (altMax - alt2); //come sarebbe i se stampassimo solo la seconda piramide
		if (i2 <= 0)
		{
			//Su questa riga non c'e' ancora la seconda piramide, non faccio nulla
		}
		else
		{
			//La piramide c'e', solita stampa degli asterischi
			for (iStampa = 0; iStampa < alt2 - i2; iStampa++)
				cout << " ";
			for (iStampa = 0; iStampa < 2*i2 - 1; iStampa++)
				cout << "*";
		}
		cout << endl;
	}
	return 0;
}
