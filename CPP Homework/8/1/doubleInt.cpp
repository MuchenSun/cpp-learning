#include <iostream>
#include "doubleInt.h"
using namespace std;

doubleInt::doubleInt(int a,int b){x=a; y=b;}

void doubleInt::print(){cout << "x = " << x << ",y = " << y << endl;}

int doubleInt::gcd(){ /// Õ·×ªÏà³ý·¨
	int a=x,b=y;
	int r = a%b;
	while(r){
		swap(a,b); swap(b,r);
		r = a%b;
	}
	return b;
}

int doubleInt::lcm(){
	return x*y/gcd();
}
