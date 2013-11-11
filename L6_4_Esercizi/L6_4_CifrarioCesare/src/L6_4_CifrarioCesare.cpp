//============================================================================
// Name        : L6_4_CifrarioCesare.cpp
// Author      : Roman Fedorov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int const LUN_ALFABETO = 26;

char criptaCarattere(char c, int chiave)
{
	if ( (c >= 'a') && (c <= 'z') )
	{
		chiave = chiave % LUN_ALFABETO;
		c = c + chiave;
		if (c < 'a')
		{
			 c+= LUN_ALFABETO;
		}
		if (c > 'z')
		{
			 c-= LUN_ALFABETO;
		}
	}
	return c;
}

int main() {
	string s;
	int chiave;
	cout << "Inserisci la frase da criptare:" << endl;
	getline(cin, s);
	cout << "Inserisci la chiave:" << endl;
	cin >> chiave;
	cout << "Il risultato criptato:" << endl;
	for (char c: s)
	{
		cout << criptaCarattere(c, chiave);
	}
	cout << endl;
	return 0;
}
