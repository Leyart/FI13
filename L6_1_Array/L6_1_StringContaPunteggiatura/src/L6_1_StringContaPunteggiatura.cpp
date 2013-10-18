//============================================================================
// Name        : L6_1_StringContaPunteggiatura.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main2() {
	string s("Hello World!!!!");
	decltype(s.size()) punct_cnt = 0;
	// punct_cnt assumes same type as s.size()
	for (char c : s) // for every char in s
		if (ispunct(c)) // if the character is punctuation
			++punct_cnt; // increment the punctuation counter
	cout << punct_cnt << " punctuation characters in " << s << endl;

	return 0;
}


int main() {
	string s("Hello World!!!!!");
	decltype(s.size()) punct_cnt = 0;
	// punct_cnt assumes same type as s.size()
	for (decltype(s.size()) index = 0;
			index != s.size(); ++index) // for every char in s
		if (ispunct(s[index])) // if the character is punctuation
			++punct_cnt; // increment the punctuation counter
	cout << punct_cnt << " punctuation characters in " << s << endl;

	return 0;
}
