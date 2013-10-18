//============================================================================
// Name        : L6_StringIterazione.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main2() {
	string str("some string");
	// print the characters in str one character to a line
	cout << "Use of iterator with strings" << endl;
	for (auto c : str)   // for every char in str
		cout << c << endl; // print the current character
						   // followed by a newline
	return 0;
}

int main() {
	string str("some string");
	// print the characters in str one character to a line
	cout << "Use of subscripting with strings" << endl;
	for (decltype(str.size()) index = 0;  // for every char in str
	index != str.size(); ++index)
		cout << str[index] << endl; // print the current character

	return 0;
}
