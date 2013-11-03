//============================================================================
// Name        : L7_1_TestoEvidenziatoConFunzioni.cpp
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

void leggitesto(vector<string> &t) {
	ifstream in;
	in.open("testo.txt");
	if (in) {
		string r;
		while (getline(in, r)) {
			t.push_back(r);
		}
	} else
		cout << "File non aperto correttamente!" << endl;
}

void stampatesto(const vector<string> &t) {
	for (auto &r : t) {  // &r è un sinonimo della riga corrente nel vettore
		auto i = &r - &t[0]; // in questo modo calcolo l'indice della riga corrente
		cout << i + 1 << " " << r << endl;
	}
}

void stamparighe(const vector<int> &rr) {
	for (auto i : rr) // stampa gli indici di riga dove appare la parola
		cout << i << endl;
}

void evidenzia(vector<string> &t, const string &parola, vector<int> &righe) {
	decltype(parola.size()) indiceParola = 0;
	int numriga = 0;
	for (auto &riga : t) {                   // finché non finisce il testo
		decltype(riga.size()) indiceRiga = 0;
		indiceParola = 0;
		++numriga;
		while (indiceRiga < riga.size()) {        // finchè non finisce una riga
			indiceParola = 0;
			while (indiceRiga < riga.size() // avanza finché non trovi 1 car di parola o fine riga
			&& toupper(parola[indiceParola]) != toupper(riga[indiceRiga]))
				++indiceRiga;
			// avanza finché non trovi due caratteri diversi o arrivi a fine riga o parola
			while (indiceRiga < riga.size() && indiceParola < parola.size()
					&& toupper(parola[indiceParola])
							== toupper(riga[indiceRiga])) {
				++indiceRiga;
				++indiceParola;
			} // all'uscita sono a fine parola o a fine riga
			if (indiceParola == parola.size()) { // ho trovato tutti i caratteri
				if ((indiceRiga == riga.size() || !isalpha(riga[indiceRiga])) // non c'è un car a dx
				&& (indiceRiga - parola.size() == 0         // è la prima parola
				|| !isalpha(riga[indiceRiga - parola.size() - 1]))) { // non c'è un car a sx
					// TROVATA!! converti la parola in maiuscolo
					for (decltype(riga.size()) i = 0; i < parola.size(); ++i)
						riga[indiceRiga - parola.size() + i] = toupper(
								riga[indiceRiga - parola.size() + i]); // converti in maiuscolo
					righe.push_back(numriga); // salva indice di riga in cui appare parola
				}                             // fine test caratteri trovati
			}                                 // fine test parola intera trovata
		}                                     // fine analisi intera riga
		indiceRiga = 0;                // azzera indice per prox riga, se esiste
	}
}

int main() {
	vector<string> testo;
	vector<int> righe;
	string par;
	leggitesto(testo);
	cout << "Inserisci parola da ricercare" << endl;
	cin >> par;
	evidenzia(testo, par, righe);
	stampatesto(testo);
	stamparighe(righe);
	return 0;
}

