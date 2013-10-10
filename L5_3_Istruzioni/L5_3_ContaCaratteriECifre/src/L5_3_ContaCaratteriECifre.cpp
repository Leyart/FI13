//============================================================================
// Name        : ContaCaratteriECifre.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char c;
	int n_cifre = 0, n_separatori = 0, n_altri = 0;
	do {
		cout << "dammi un carattere; ! per terminare  " << endl;
		cin >> c;
		switch (c) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			++n_cifre;
			break;
		case '.':
		case ';':
		case ':':
		case ',':
			++n_separatori;
			break;
		default:
			++n_altri; // considera anche ! tra gli altri caratteri
		}

	} while (c != '!');
	cout << "cifre: " << n_cifre << " separatori: " << n_separatori
			<< " altri: " << n_altri << endl;
	return 0;
}
