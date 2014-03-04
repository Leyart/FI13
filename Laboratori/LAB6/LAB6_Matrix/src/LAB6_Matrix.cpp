//============================================================================
// Name        : LAB6_Matrix.cpp
// Author      : Roman Fedorov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Matrix.h"
using namespace std;

int main() {
Matrix m = Matrix::zero(3,4);
m(0,0) = 5;
m(1,1) = 6;
m(2,2) = 3;
cout << m << endl << m*Matrix::identity(m.getColumns()) << endl << 2*m << endl;
return 0;
}
