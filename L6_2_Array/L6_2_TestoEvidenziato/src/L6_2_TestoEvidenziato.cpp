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
	while (getline(in, riga)) {                            // finché non finisce il testo
		indiceParola = 0;
		++numriga;
		while (indiceRiga < riga.size()) {                 // finchè non finisce una riga
			indiceParola = 0;
			while (indiceRiga < riga.size()        // avanza finché non trovi 1 car di parola o fine riga
			&& toupper(parola[indiceParola]) != toupper(riga[indiceRiga]))
				++indiceRiga;
			// avanza finché non trovi due caratteri diversi o arrivi a fine riga o parola
			while (indiceRiga < riga.size() && indiceParola < parola.size()
					&& toupper(parola[indiceParola]) == toupper(riga[indiceRiga])) {
				++indiceRiga;
				++indiceParola;
			} // all'uscita sono a fine parola o a fine riga
			if (indiceParola == parola.size()) { // ho trovato tutti i caratteri
				if ((indiceRiga == riga.size() || !isalpha(riga[indiceRiga]))    // non c'è un car a dx
				&& (indiceRiga - parola.size() == 0                              // è la prima parola
				|| !isalpha(riga[indiceRiga - parola.size() - 1]))) {            // non c'è un car a sx
					// TROVATA!! converti la parola in maiuscolo
					for (decltype(riga.size()) i = 0; i < parola.size(); ++i)
						riga[indiceRiga - parola.size() + i] = toupper(
								riga[indiceRiga - parola.size() + i]); // converti in maiuscolo
					righe.push_back(numriga); // salva indice di riga in cui appare parola
				}                             // fine test caratteri trovati
			}                                 // fine test parola intera trovata
		}                                     // fine analisi intera riga
		testo.push_back(riga);                // salva riga con parole eventualmente evidenziate
		indiceRiga = 0;                       // azzera indice per prox riga, se esiste
	}
	for (auto &r : testo) {                    // &r è un sinonimo della riga corrente nel vettore
		auto i = &r - &testo[0];               // in questo modo calcolo l'indice della riga corrente
		cout << i + 1 << " " << r << endl;
	}
	for (auto i : righe) // stampa gli indici di riga dove appare la parola
		cout << i << endl;
	return 0;
}
