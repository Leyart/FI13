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
	while (true) //ciclo che somma gli addendi
	{
		mult = true;
		currentProd = 1;
		while (true) //ciclo che moltiplica tutti i fattori di un addendo
		{
			currentNum = 0;
			for (cin >> c; (c >= '0') && (c <= '9'); cin >> c) //ciclo per la lettura di un numero
			{
				currentNum = currentNum * 10 + (c - 48);
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
			if ( (c == '+') || (c == '-') || (c == '='))
			{ //fine dell'addendo
				break;
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
		if (c == '=')
		{ //fine dell'espressione
			break;
		}
	}

	cout << "Il risultato: " << totalSum;

	return 0;
}
