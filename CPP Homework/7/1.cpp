#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype> /// ����cctype�� 
using namespace std;

/// ��һ�⣺���ô��ݣ��жϻ��� 

bool Palindrome(char * &); 

int main(){
	/// ��ʼ�������� 
	char * Str = new char[100];
	cout << "please input: ";
	gets(Str);
	/// �����ͺ������ж��Ƿ�Ϊ���ģ��������Ӧ��� 
	if(Palindrome(Str)){cout << "Yes,it's a palidrome!" << endl;}
	else{cout << "No,it's not a palidrome!" << endl;}
	/// ���� 
	return 0;
}

bool Palindrome(char * &a){
	int i,j;
	/// ����һ���µĿռ䲢��ʼ�� 
	char * b = new char[strlen(a)+1];
	b[strlen(a)] = '\0';
	/// ������j���������ĩβ����һ��'\0'��	
	for(j=0;a[j]!='\0';j++){}
	/// �������ַ���a������ֵ���������b�� 
	for(i=0,j--;a[i]!='\0';i++,j--){
		b[i] = a[j];
	}
	/// ��a��b��ȣ�������Ϊ����  
	if(strcmp(a,b)==0){return true;}
	return false;
}

