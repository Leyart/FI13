//============================================================================
// Name        : LAB4_SottoArraySommaMax.cpp
// Author      : Roman Fedorov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

double sommaSottoArray(vector<double> vec, int i, int k)
{
	double somma = 0;
	for (int i2 = i; i2 < i + k; i2++)
	{
		somma += vec[i2];
	}
	return somma;
}

int main() {
	vector<double> v;
	int n,k,i,indiceMax;
	double sommaMax;
	cout << "Inserisci n";
	cin >> n;
	cout << "Inserisci n numeri";
	for (i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}
	cout << "Inserisci k";
	cin >> k;
	bool primaVolta = true;
	for (i = 0; i < n-k+1; i++)
	{
		double somma = sommaSottoArray(v, i, k);
		if ((somma > sommaMax) || primaVolta)
		{
			primaVolta = false;
			sommaMax = somma;
			indiceMax = i;
		}
	}
	cout << "La sequenza ";
	for (i = indiceMax; i < indiceMax + k; i++)
	{
		cout << v[i] << " ";
	}
	cout << "ha la somma massima " << sommaMax << endl;
	return 0;
}

