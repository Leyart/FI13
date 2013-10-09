//============================================================================
// Name        : SommaDueInteriBis.cpp
// Author      : Piero Fraternali
// Version     : 2
// Copyright   : Your copyright notice
// Description : Use of in-line variable declaration
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int integer1, integer2;            // declaration

	cout << "Enter first integer" << endl;  // prompt
	cin >> integer1;                        // read an integer
	cout << "Enter second integer" << endl;  // prompt
	cin >> integer2;                         // read an integer
	int sum = integer1 + integer2;           // in-line declaration + initialization
	cout << "The sum of " << integer1 << " and " << integer2 << " is: " << sum; // print sum

	return 0;                               // successful end
}
