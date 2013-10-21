//============================================================================
// Name        : SeqFibonacci.cpp
// Author      : Roman Fedorov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, nuovo, ultimo, penultimo, i;
	cout << "Quanti numeri vuoi stampare (> 0)?" << endl;
	cin >> n;
	ultimo = 1;
	penultimo = 1;
	cout << "F(1)=" << penultimo << endl;
	if (n > 1)
	{
		cout << "F(2)=" << ultimo << endl;
		for (i = 3; i <= n;i++)
		{
			nuovo = ultimo + penultimo;
			cout << "F(" << i << ")=" << nuovo << endl;
			penultimo = ultimo;
			ultimo = nuovo;
		}
	}
	return 0;
}
