#include <iostream>
#include "complex.cpp"
using namespace std;

/// µÚ¶şÌâ

int main(){
	Complex A(1,2);
	Complex B(2,3);
    A.print();  cout << " + ";  B.print();  cout << " = ";  A.plus(B).print();  cout << endl;
    cout << "result's imaginary part: " << A.plus(B).getimag() << endl;
	A.print();  cout << " * ";  B.print();  cout << " = ";  A.multiply(B).print();  cout << endl;
	cout << "result's imaginary part: " << A.multiply(B).getimag() << endl;
	return 0;
}

