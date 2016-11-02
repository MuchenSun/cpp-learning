#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype> /// 包含cctype库 
using namespace std;

/// 第一题：引用传递，判断回文 

bool Palindrome(char * &); 

int main(){
	/// 初始化并输入 
	char * Str = new char[100];
	cout << "please input: ";
	gets(Str);
	/// 布尔型函数：判断是否为回文，并输出相应结果 
	if(Palindrome(Str)){cout << "Yes,it's a palidrome!" << endl;}
	else{cout << "No,it's not a palidrome!" << endl;}
	/// 结束 
	return 0;
}

bool Palindrome(char * &a){
	int i,j;
	/// 申请一段新的空间并初始化 
	char * b = new char[strlen(a)+1];
	b[strlen(a)] = '\0';
	/// 将跟随j置于输入的末尾，第一个'\0'处	
	for(j=0;a[j]!='\0';j++){}
	/// 将输入字符串a，倒序赋值到新申请的b中 
	for(i=0,j--;a[i]!='\0';i++,j--){
		b[i] = a[j];
	}
	/// 若a与b相等，则输入为回文  
	if(strcmp(a,b)==0){return true;}
	return false;
}

