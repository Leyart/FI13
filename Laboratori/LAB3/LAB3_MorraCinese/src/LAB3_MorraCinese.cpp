//============================================================================
// Name        : LAB3_MorraCinese.cpp
// Author      : Roman Fedorov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
	int mossaUtente, mossaProgramma; // 0 - Carta, 1 - Sasso, 2 - Forbici
	char c;
	mossaUtente = -1;
	while (mossaUtente < 0)
	{
		cout << "Scegli la tua mossa: 'c' per Carta, 's' per Sasso, 'f' per Forbici" << endl;
		cin >> c;
		if (c == 'c')
			mossaUtente = 0;
		if (c == 's')
			mossaUtente = 1;
		if (c == 'f')
			mossaUtente = 2;
	}
	srand(time(0));
	mossaProgramma = rand() % 3;
	cout << "Il programma ha scelto ";
	if (mossaProgramma == 0)
		cout << "Carta";
	if (mossaProgramma == 1)
		cout << "Sasso";
	if (mossaProgramma == 2)
		cout << "Forbici";
	cout << endl;

	if (mossaUtente == mossaProgramma)
		cout << "Pareggio!" << endl;
	else if (
				( (mossaUtente == 0) && (mossaProgramma == 1) ) ||
				( (mossaUtente == 1) && (mossaProgramma == 2) ) ||
				( (mossaUtente == 2) && (mossaProgramma == 0) )
			)
		cout << "Hai vinto!" << endl;
	else
		cout << "Hai perso!" << endl;

	return 0;
}
