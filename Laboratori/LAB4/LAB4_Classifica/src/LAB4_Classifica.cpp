//============================================================================
// Name        : LAB4_Classifica.cpp
// Author      : Roman Fedorov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

const int NUMERO_SQUADRE = 5;
const int NUMERO_GIORNATE = 8;

vector<int> sommaDueVettori(vector<int> v1, vector<int> v2)
{
	vector<int> v;
	if (v1.size() != v2.size()){
		//vettori di dimensioni diverse, ritorno vettore vuoto
		return v;
	}
	for (int i = 0; i < v1.size(); i++)
	{
		v.push_back(v1[i] + v2[i]);
	}
	return v;
}

int indiceValoreMassimo(vector<int> v)
{
	if (v.size() < 1)
	{
		//nessun elemento
		return -1; //ritorno -1 per segnalare un errore
	}
	int maxIndice = 0;
	int maxVal = v[0];
	for (int i = 1; i < v.size(); i++)
	{
		if (v[i] > maxVal)
		{
			maxIndice = i;
			maxVal = v[i];
		}
	}
	return maxIndice;
}


int main() {
	int m[NUMERO_SQUADRE][NUMERO_GIORNATE] =
	{
			{1,2,0,0,2,2,0,1},	//squadra 1
			{1,1,2,2,1,0,0,0},	//squadra 2
			{2,0,1,1,1,1,2,0},	//squadra 3
			{0,0,0,2,2,2,1,2},	//squadra 4
			{2,2,0,1,1,1,1,1}	//squadra 5
	};
	vector<int> punteggiCorrenti;
	for (int i = 0; i < NUMERO_SQUADRE; i++) // inizializzo tutte le squadre a 0
	{
		punteggiCorrenti.push_back(0);
	}

	for (int i = 0; i < NUMERO_GIORNATE; i++)
	{
		vector<int> punteggiGiornata;
		for (int ii = 0; ii < NUMERO_SQUADRE; ii++) // estraggo la colonna dei punteggi di questa giornata
		{
			punteggiGiornata.push_back(m[ii][i]);
		}

		//aggiorno i punteggi
		punteggiCorrenti = sommaDueVettori(punteggiCorrenti, punteggiGiornata);
		int indiceCapolista = indiceValoreMassimo(punteggiCorrenti);
		cout << "Dopo la " << (i + 1) << "° giornata la squadra n." << (indiceCapolista + 1) << " e' in testa con " << punteggiCorrenti[indiceCapolista] << " punti" << endl;
	}

	return 0;
}
