#include <iostream>
using namespace std;

/// ��ϰ�����ô��� 

void testNum(int &);
void swapNum(int &,int &);
void showStr(char * &);

int main(){
	/// �����ֲ��� 
	int a=1,b=3;
	cout << "a = " << a << endl;
	testNum(a);
	cout << "a = " << a << endl;
	/// ���ּ���������� 
	cout << a << "," << b << endl;
	swapNum(a,b);
	cout << a << "," << b << endl;
	/// �ַ�������
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
