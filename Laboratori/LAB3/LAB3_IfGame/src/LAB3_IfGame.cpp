//============================================================================
// Name        : LAB3_IfGame.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cout << "Inserisci il valore di 'a':" << endl;
	cin >> a;
	cout << "Inserisci il valore di 'b':" << endl;
	cin >> b;
	cout << "Inserisci il valore di 'c':" << endl;
	cin >> c;

	if ((a > 10) && (b % 2 == 0))
	{
		if ( (c <= a) && (c + b == 0))
		{
			cout << "Hai raggiunto il punto (1)" << endl;
		}
		else
		{
			if ((c > a) || (a % 11 == 3))
			{
				cout << "Hai raggiunto il punto (2)" << endl;
			}
			else
			{
				cout << "Hai raggiunto il punto (3)" << endl;
			}
		}
	}
	else
	{
		cout << "Hai raggiunto il punto (4)" << endl;
	}
	return 0;
}
