//============================================================================
// Name        : L5_2_UnsignedNegative.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() { // Assegna a unsigned valore negativo
	unsigned char c;      // va da 0 a 255;
	cout << "Inserire un numero negativo: " << endl;
	int i;
	cin >> i;
	cout << "Valore inserito (intero originale): " << i << endl;
	c=i;
	cout << "Valore inserito (char): " << c << endl;
	i=c;
	cout << "Valore inserito (intero dopo la conversione a char): " << i << endl;
	return 0;
}

