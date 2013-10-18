//============================================================================
// Name        : L6_1_Reference.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int ival = 1024;
	int &refVal = ival; // refVal è sinonimo di  ival

	cout << "Valore di ival " << ival << endl;
	refVal = 2048;
	cout << "Valore di refVal " << refVal << endl;
	cout << "Valore di ival " << ival << endl;

	return 0;
}
