//============================================================================
// Name        : L6_2_TestoEvidenziato.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

int main() {
	vector<string> testo;
	string parola, riga;
	vector<int> righe;
	decltype(riga.size()) indiceRiga = 0;
	decltype(parola.size()) indiceParola = 0;
	int numriga = 0;
	cout << "Inserisci parola da ricercare" << endl;
	cin >> parola;
	ifstream in;
	in.open("testo.txt");
	while (getline(in, riga)) {
		indiceParola = 0;
		++numriga;
		while (indiceRiga < riga.size()) {
			// avanza finché non trovi due caratteri uguali o arrivi a fine riga
			indiceParola = 0;
			while (indiceRiga < riga.size()
					&& parola[indiceParola] != riga[indiceRiga]) {
				++indiceRiga;
			}
			// avanza finché non trovi due caratteri diversi o arrivi a fine riga o parola

			while (indiceRiga < riga.size() && indiceParola < parola.size()
					&& parola[indiceParola] == riga[indiceRiga]) {
				++indiceRiga;
				++indiceParola;
			} // all'uscita sono a fine parola o a fine riga

			if (indiceParola == parola.size() && !isalpha(riga[indiceRiga])
					&& !isalpha(riga[indiceRiga - parola.size() - 1])) { // trovata la parola intera
				for (decltype(riga.size()) i = 0; i < parola.size(); ++i)
					riga[indiceRiga - parola.size() + i] = toupper(
							riga[indiceRiga - parola.size() + i]); // converti in maiuscolo
				righe.push_back(numriga);
			}

		}

		testo.push_back(riga); // aggiungi la riga con le parole evidenziate al testo
		indiceRiga = 0;
	}
	for (auto &r : testo) {                     // &r è un sinonimo della riga corrente nel vettore
		auto i = &r - &testo[0];                // in questo modo calcolo l'indice della riga corrente
		cout << i+1 << " " << r << endl;
	}
	for (auto i : righe)
		cout << i << endl;

	return 0;
}
