//============================================================================
// Name        : L7_1_CallByValueReference.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void callByValue(int i) {
    i = i * 2;
}

void callByRef(int &i) {
    i = i * 2;
}

int callByRet(int i) {
    return i * 2;
}

/* questo e' errato
 void callByConstRef(const int &i) {
 i = i * 2;
 }
 */

int main() {
    int j = 1;
    callByValue(j);
    cout << "After call by value j's value  is " << j << endl;
    callByRef(j);
    cout << "After call by reference j's value  is " << j << endl;
    j=callByRet(j);
    cout << "After call by reference j's value  is " << j << endl;

    return 0;
}
