#include <iostream>
#include <cstring>
#include <cctype>
#include "2_class.h"

using namespace std;

String::String(){ // 初始化两个私有数据成员
	content = new char[100]; // 给content分配内存
	if(content == NULL){cout << "allocation failure\n";}
	cout << "Please input a string: ";
	cin.getline(content,100);
	len = strlen(content);
}

String::~String(){
	delete []content;
}

void String::Reverse(){ // 倒序输出
	cout <<  "Reverse order: ";
	for(int i=len-1;i>-1;i--){cout << content[i];}
	cout << endl;
}

void String::Upper(){ // 统计大写字母数量
	int amount = 0;
	for(int i=0;i<len;i++){
		if(isupper(content[i])){amount++;}
	}
	cout << "Amount of uppercase:" << amount << endl;
}

void String::toUpper(){ // 以全大写形式输出
	int amount = 0;
	cout << "All uppercase form: ";
	for(int i=0;i<len;i++){
		content[i]= toupper(content[i]);
		cout << content[i];
	}
	cout << endl;
}
