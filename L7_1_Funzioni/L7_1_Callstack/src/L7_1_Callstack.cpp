//============================================================================
// Name        : L7_1_callstack.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int potenza(int a,int b);
int moltiplica(int x,int y);

int main(){
    int i=2,j=3,k;
    k=moltiplica(i,j);
    cout << k << endl;
    k=potenza(i,j);
    cout << k << endl;
}

int potenza(int a,int b){
    int i, p=1;
    for(i=1;i<=b;i++)
        p=moltiplica(p,a);
    return p;

}

int moltiplica(int x,int y){
    return x*y;
}
