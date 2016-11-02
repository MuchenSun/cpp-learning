#include <iostream>
using namespace std;

/// 练习：引用传递 

void testNum(int &);
void swapNum(int &,int &);
void showStr(char * &);

int main(){
	/// 单数字操作 
	int a=1,b=3;
	cout << "a = " << a << endl;
	testNum(a);
	cout << "a = " << a << endl;
	/// 数字间操作：交换 
	cout << a << "," << b << endl;
	swapNum(a,b);
	cout << a << "," << b << endl;
	/// 字符串操作
	char * A="I am your father!";
	showStr(A);
	return 0;
} 

void testNum(int & n){
	n++;
}

void swapNum(int & a,int & b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void showStr(char * &a){
	int i;
	for(i=0;a[i]!='\0';i++){
		cout << a[i];
	}
}
