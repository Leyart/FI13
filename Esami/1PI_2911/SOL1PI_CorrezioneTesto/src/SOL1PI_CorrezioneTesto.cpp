//============================================================================
// Name        : SOL1PI_CorrezioneTesto.cpp
// Author      : Carlo Bernaschina
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include <string>
#include <iostream>
#include <vector>
using namespace std;

void stampaTestoCorretto(const string &testo, const vector<string> &listaNomi, const vector<string> &listaMacro);
string toLower(const string &s);
string toUpper(const string &s);
string correggiParola(const string &parola, const vector<string> &listaNomi, const vector<string> &listaMacro, bool inizio);
bool presenteNelVettore(string elemento, vector<string> vettore);

int main() {
	string testo;
	vector<string> listaNomi;
	vector<string> listaMacro;
	cout << "Inserisci il testo:" << endl;
	getline(cin, testo);
	cout << "Inserisci una lista di nomi \".\" per terminare:" << endl;
	string nome;
	cin >> nome;
	while (nome != "."){
		listaNomi.push_back(toLower(nome));
		cin >> nome;
	}
	cout << "Inserisci una lista delle macro \".\" per terminare:" << endl;
	string macro;
	cin >> macro;
	while (macro != "."){
		listaMacro.push_back(toLower(macro));
		cin >> macro;
	}
	cout << "Versione corretta:" << endl;
	stampaTestoCorretto(testo, listaNomi, listaMacro);
	cout << endl;
	return 0;
}

string toLower(const string &s){
	string l = s;
	for (unsigned int i=0; i < l.size(); i++){
		l[i] = tolower(l[i]);
	}
	return l;
}

string toUpper(const string &s){
	string l = s;
	for (unsigned int i=0; i < l.size(); i++){
		l[i] = toupper(l[i]);
	}
	return l;
}

void stampaTestoCorretto(const string &testo, const vector<string> &listaNomi, const vector<string> &listaMacro) {
	string parola = "";
	//questo toLower risolve l'ultima regola e non necessita di ulteriori controlli
	string input = toLower(testo);
	bool inizio = true;
	for (int i = 0; i < input.size(); i++) {
		char carattere = input[i];
		//e' una lettera (non controllo la versione maiuscola dato che ho fatto il toLower all'inizio)
		if (carattere >= 'a' && carattere <= 'z'){
			parola += carattere;
		} else {
			if (parola != ""){
				cout << correggiParola(parola, listaNomi, listaMacro, inizio);
				parola = "";
				inizio = false;
			}
			//stampo il carattere
			cout << carattere;
			// terminatore di frase
			if (carattere == '.' || carattere == '?' || carattere == '!') {
				inizio = true;
			}
		}
	}
	// la frase finisce con una parola
	if (parola != "")
		cout << correggiParola(parola, listaNomi, listaMacro, inizio);
}

string correggiParola(const string &parola, const vector<string> &listaNomi, const vector<string> &listaMacro, bool inizio){
	// e' una macro
	if (presenteNelVettore(parola, listaMacro)){
		// metto in maiuscolo
		return toUpper(parola);
	// e' un nome o la prima parola nella frase
	} else if (presenteNelVettore(parola, listaNomi) || inizio){
		string nome = parola;
		// metto la prima lettera in maiuscolo
		nome[0] = toupper(nome[0]);
		return nome;
	// nessuno dei casi precedenti (ho fatto toLower su tutta la frase all'inizio)
	} else {
		// non modifico la parola
		return parola;
	}
}

bool presenteNelVettore(string elemento, vector<string> vettore){
	//per ogni elemento
	for (int i = 0; i < vettore.size(); i++) {
		//elemento presente nella lista
		if (vettore[i] == elemento)
			return true;
	}
	return false;
}

