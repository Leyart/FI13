//============================================================================
// Name        : L5_2_ASCII_int-char.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {     // Stampa il codice carattere
	char c;      // corrispondente ai 128 codici ASCII
	for (int i = 0; i < 128; i++) {
		c = i; // assegna il valore intero al carattere
		cout << "Il carattere corrispondente a " << i << " è: " << c << endl;
	}
	return 0;
}

