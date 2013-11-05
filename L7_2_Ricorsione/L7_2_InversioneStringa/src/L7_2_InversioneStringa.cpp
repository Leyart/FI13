//============================================================================
// Name        : L7_2_InversioneStringa.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

string inversione(string s) {
	// caso base
	if (s.size() == 1)
		return s;
	// passo induttivo
	return inversione(s.substr(1, s.size()-1)) + s[0];
}

int main() {
	string s1 = "Hello world!!";
	string s2;
	s2 = inversione(s1);
	cout << s2;
	return 0;
}
