#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype> /// ����cctype�� 
using namespace std;

/// �ڶ��⣺ͬ��һ�⣬�����Ǵ�Сд���ո������
/// �������ݣ���Madam,I'm Adam!��Ӧ���ж�Ϊ���� 

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
	/// ����һ���µĿռ� 
	char * b = new char[strlen(a)];
	/// �������⽫a�з���Ҫ���Ԫ�ظ��Ƶ�b�У�������a��ԭ��Ԫ�� 
	for(i=0,j=0;a[i]!='\0';i++){
		if(isalnum(a[i])){
			b[j++] = tolower(a[i]);
		}
		a[i] = '\0';
	}
	b[j] = '\0';
	/// ͬ��һ���з����жϻ��ģ���ȵ�һ�⣬a��b�൱�ڵ�����һ�£� 
	for(i=0,j--;b[i]!='\0';i++,j--){
		a[i] = b[j];
	}	
	if(strcmp(a,b)==0){return true;}
	return false;
}

