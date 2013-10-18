//============================================================================
// Name        : L6_1_Uppercase.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <cctype>
using namespace std;


int main() {
	string str("some string");
	                       // uppercase and print the characters in str
	cout << "Use of iterator with strings" << endl;
	for (auto &c : str)     // for every element in str
		c = toupper(c);     // uppercase the element
	cout << str << endl;
	return 0;
}


int main2() {
	string str("some string");
	                                       // uppercase and print the characters in str
	cout << "Use of subscripting with strings" << endl;
	for (decltype(str.size()) index = 0;   // for every char in str
	index != str.size(); ++index)
		str[index] = toupper(str[index]);  // uppercase the element
	cout << str << endl;                   // print the modified string
	return 0;
}
