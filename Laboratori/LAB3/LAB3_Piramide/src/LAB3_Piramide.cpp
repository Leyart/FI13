//============================================================================
// Name        : LAB3_Piramide.cpp
// Author      : Roman Fedorov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int alt, i, i2;
	alt = 0;
	while (alt <= 0)
	{
		cout << "Inserisci l'altezza della piramide:" << endl;
		cin >> alt;
		if (cin == false)
		{
			cout << "Input non valido" << endl;
			return 0;
		}
	}

	//Stampa con il primo metodo
	for (i = 1; i <= alt; i++)
	{
		for (i2 = 0; i2 < alt - i; i2++)
			cout << " ";
		for (i2 = 0; i2 < 2*i - 1; i2++)
			cout << "*";
		cout << endl;
	}
	return 0;
}
