//============================================================================
// Name        : L5_3_DoWhile.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char rsp; // used in the condition; can't be defined inside the do
	do {
		cout << "please enter two values: " << endl;
		int val1 = 0, val2 = 0;
		cin >> val1 >> val2;
		cout << endl << "The sum of " << val1 << " and " << val2 << " = " << val1 + val2
				<< "\n\n" << "More? Enter y or n: " << endl;
		cin >> rsp;
	} while (rsp != 'n');
	cout << "Thank you for playing!!" << endl;
	return 0;
}
