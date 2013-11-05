//============================================================================
// Name        : Calcolatrice.cpp
// Author      : Roman Fedorov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


using namespace std;

int main() {
	double totalSum, currentProd, currentNum;
	bool plus = true, mult;
	totalSum = 0;
	char c;

	cout << "Inserisci l'espressione da valutare (un carattere per volta, '=' per terminare):" << endl;
	c = 'X';
	while (c != '=') //ciclo che somma gli addendi
	{
		mult = true;
		currentProd = 1;
		c = 'X';
		while ((c != '+') && (c != '-') && (c != '=')) //ciclo che moltiplica tutti i fattori di un addendo
		{
			currentNum = 0;
			cin >> c;
			while ((c >= '0') && (c <= '9'))
			{
				currentNum = currentNum * 10 + (c - 48);
				cin >> c;
			}

			if (mult)
			{ //questo numero andava moltiplicato
				currentProd *= currentNum;
			}
			else
			{ //questo numero andava diviso
				currentProd /= currentNum;
			}

			if (c == '*')
			{ //il prossimo numero numero va moltiplicato
				mult = true;
			}
			if (c == '/')
			{ //il prossimo numero numero va diviso
				mult = false;
			}
		}

		if (plus)
		{ //questo numero va sommato
			totalSum += currentProd;
		}
		else
		{ //questo numero va sotratto
			totalSum -= currentProd;
		}

		if (c == '+')
		{ //il prossimo numero numero va sommato
			plus = true;
		}
		if (c == '-')
		{ //il prossimo numero numero va sotratto
			plus = false;
		}
	}

	cout << "Il risultato: " << totalSum << endl;

	return 0;
}
