//============================================================================
// Name        : L6_1_StringLetturaGetline.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	string line;
	// read a line at a time until end-of-line
	cout << "Lettura con getline" << endl;
	while (getline(cin, line)) {
		cout << line << endl; //  emit NL & flush
	}
	cout << "Thank you for playing!" << endl;
	return 0;
}
