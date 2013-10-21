//============================================================================
// Name        : TestPrimalita.cpp
// Author      : Roman Fedorov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, d;
	cout << "Inserisci un numero naturale > 1" << endl;
	cin >> n;
	for (d = 2;n % d != 0; d++);
	if (n == d)
	{
		cout << n << " e' un numero primo";
	}
	else
	{
		cout << n << " e' un numero composto";
	}
	return 0;
}
