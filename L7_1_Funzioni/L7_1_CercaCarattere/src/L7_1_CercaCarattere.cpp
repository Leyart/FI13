//============================================================================
// Name        : L7_1_CercaCarattere.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

string::size_type find_char(const string &s, char c,
		string::size_type &occurs) {
	auto ret = s.size(); // position of the first occurrence, if any
	occurs = 0; // set the occurrence count parameter
	for (decltype(ret) i = 0; i != s.size(); ++i) {
		if (s[i] == c) {
			if (ret == s.size())
				ret = i; // remember the first occurrence of c
			++occurs; // increment the occurrence count
		}
	}
	return ret; // count is returned implicitly in occurs
}

int main() {
	string someString;
	string::size_type count;
	cout << "Insert the string to search" << endl;
	getline(cin, someString);
	char c;
	cout << "Insert the char to search" << endl;
	cin >> c;
	auto index = find_char(someString, c, count);
	if (index < someString.size()) {
		cout << "Character " << c << " first occurs at pos: " << index << endl;
		cout << "Number of occurrences is: " << count << endl;
	} else
		cout << "Character not found" << endl;
	return 0;
}
