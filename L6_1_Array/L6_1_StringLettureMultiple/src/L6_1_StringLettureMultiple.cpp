//============================================================================
// Name        : L6_1_StringLettureMultiple.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    while (cin >> word)  // read until end-of-file
        cout << word << endl; // write each word
      // followed by a new line
    cout << "Thank you for playing !" << endl;
    return 0;
}
