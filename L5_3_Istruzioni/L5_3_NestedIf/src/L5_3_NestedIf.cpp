//============================================================================
// Name        : L5_3_NestedIf.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int i;
	cout << "Inserisci un numero intero:" << endl;
	cin >> i;
	if (i < 100)
		if (i > 0)
			cout << "Minore di 100 e maggiore di 0" << endl;
		else if (i == 0)
			cout << "Uguale a zero" << endl;
		else
			cout << "Minore di zero" << endl;
	else if (i == 100)
		cout << "Uguale a 100" << endl;
	else
		cout << "Maggiore di 100" << endl;

	return 0;
}
