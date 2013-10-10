//============================================================================
// Name        : DivisoriPrimi.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Inserire un numero: " << endl;
	cin >> n;
	if (n % 2 == 0)
		cout << n << " è pari" << endl;
	else if (n % 3 == 0)
		cout << n << " è multiplo di 3" << endl;
	else if (n % 5 == 0)
		cout << n << " è multiplo di 5" << endl;
	else if (n % 7 == 0)
		cout << n << " è multiplo di 7" << endl;
	else if (n % 11 == 0)
		cout << n << " è multiplo di 11" << endl;
	else if (n % 13 == 0)
		cout << n << " è multiplo di 13" << endl;
	else
		cout << "il numero " << n << " non ha divisori primi < 15";

	return 0;
}
