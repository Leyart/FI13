//============================================================================
// Name        : SommaDueInteri.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Sum of 2 integers
//============================================================================

#include <iostream>
using namespace std;

int main2() {
	int integer1, integer2, sum;            // declaration

	cout << "Enter first integer" << endl;  // prompt
	cin >> integer1;                        // read an integer
	cout << "Enter second integer" << endl; // prompt
	cin >> integer2;                         // read an integer
	sum = integer1 + integer2;              // assignment
	cout << "Sum is: " << sum;              // print sum

	return 0;                               // successful end
}
