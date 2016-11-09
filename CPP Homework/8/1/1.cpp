#include <iostream>
#include "doubleInt.cpp"
using namespace std;

/// ÌâÄ¿Ò»

int main(){
	int x,y;
	cout << "input two integers: ";  cin >> x >> y;
	doubleInt obj(x,y);
	obj.print();
	cout << "greatest common divisor = " << obj.gcd() << endl;
	cout << "least common multiple = " << obj.lcm() << endl;
	return 0;
}
