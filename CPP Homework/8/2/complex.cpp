#include <iostream>
#include "complex.h"
using namespace std;

Complex::Complex(){
	R = 0;	I = 0;
//	cout << "Object:complex number created(func1)." << endl;
}

Complex::Complex(double rr,double ii){
	R = rr;	I = ii;
//	cout << "Object:complex number created(func2)." << endl;
}

Complex Complex::plus(const Complex & B){
	Complex C;
	C.R = R + B.R;
	C.I = I + B.I;
//	cout << "Operation:plus completed." << endl;
	return C;
}

Complex Complex::multiply(const Complex & B){
	Complex C;
	C.R = R*B.R - I*B.I;
	C.I = R*B.I + I*B.R;
//	cout << "Operation:multiply completed." << endl;
	return C;
}

double Complex::getimag(){return I;}

void Complex::print(){
	cout << R << "+" << I << "*i";
}
