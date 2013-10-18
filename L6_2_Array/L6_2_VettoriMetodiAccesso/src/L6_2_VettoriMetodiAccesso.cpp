//============================================================================
// Name        : L6_2_VettoriSubscript.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
using namespace std;

int main1() {

	cout << "Iterazione con operatore []" << endl;
	vector<char> v = { 'a', 'b', 'c', 'd' };
	for (decltype(v.size()) i = 0; i < v.size(); ++i) {
		cout << v[i] << endl;
	}
	return 0;
}

int main2() {

	cout << "Iterazione con ciclo range for" << endl;
	vector<char> v = { 'a', 'b', 'c', 'd' };
	for (auto c : v) {
		cout << c << endl;
	}
	return 0;
}

int main() {
	vector<char> v = { 'a', 'b', 'c', 'd' };
	cout << "Iterazione con iteratore" << endl;
	for (auto i = v.begin(); i != v.end(); ++i)
		cout << *i << endl;
	return 0;
}
