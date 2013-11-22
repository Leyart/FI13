//============================================================================
// Name        : SIM1PI_Istogramma.cpp
// Author      : Roman Fedorov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> parole; //vettore che contiene le parole
	vector<int> frequenze; //vettore che contiene le rispettive frequenze delle parole
	cout << "Inserisci il testo da analizzare: (Ctrl+Z per finire)" << endl;
	while (cin)
	{
		string s;
		cin >> s;
		if (s == "")
			continue;
		bool esistente = false;
		for (int i = 0; i < parole.size(); i++)
		{
			if (parole[i] == s)
			{
				//Se una parola e' gia' nel vettore - basta incrementare la sua frequenza
				esistente = true;
				frequenze[i]++;
				break;
			}
		}
		if (!esistente)
		{
			//Se una parola non e' gia' nel vettore - la inseriamo con la frequenza 1
			parole.push_back(s);
			frequenze.push_back(1);
		}
	}

	for (int i = 0; i < parole.size(); i++) //stampo tutte le parole ed il numero di asterischi uguale alle loro frequenze
	{
		cout << parole[i] << " ";
		for (int ii = 0; ii < frequenze[i]; ii++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
