#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype> /// 包含cctype库 
using namespace std;

/// 第二题：同第一题，但考虑大小写、空格等问题
/// 测试数据：“Madam,I'm Adam!”应被判断为回文 

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
	/// 申请一段新的空间 
	char * b = new char[strlen(a)];
	/// 根据题意将a中符合要求的元素复制到b中，并消除a中原有元素 
	for(i=0,j=0;a[i]!='\0';i++){
		if(isalnum(a[i])){
			b[j++] = tolower(a[i]);
		}
		a[i] = '\0';
	}
	b[j] = '\0';
	/// 同第一题中方法判断回文（相比第一题，a、b相当于调换了一下） 
	for(i=0,j--;b[i]!='\0';i++,j--){
		a[i] = b[j];
	}	
	if(strcmp(a,b)==0){return true;}
	return false;
}

