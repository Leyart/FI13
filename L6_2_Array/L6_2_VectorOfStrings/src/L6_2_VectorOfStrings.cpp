//============================================================================
// Name        : L6_2_VectorOfStrings.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
#include<vector>
using namespace std;


int main() {
	vector<string> testo;
	string parola;
	cout << "Inserire un testo, ctl-z per finire" << endl;
	while (cin >> parola)
		testo.push_back(parola);
	for (auto p : testo)
		cout << p << endl;
	return 0;
}
