#include <iostream>
#include <string>
#include "class.h"
using namespace std;

/*
类中各函数的实现
*/

Person::Person(){ // 默认赋值
    ID = "00000";
    Name = "NOBODY";
    Gender = "UNKNOWN";
    Birth = 0;
}

Person::Person(string ii,string nn,string gg,int bb){
    ID=ii;
    Name=nn;
    Gender=gg;
    Birth = bb;
    cout << "information completed.\n";
}

Person::Person(const Person & Obj){ // 定义复制构造函数
    ID = Obj.ID;    Name = Obj.Name;
    Gender = Obj.Gender;    Birth = Obj.Birth;
    cout << "information copied.\n";
}

void Person::printInf(){
    cout << "-------------------------\n";
    cout << "ID: " << ID << endl;
    cout << "Name: " << Name << endl;
    cout << "Gender: " << Gender << endl;
    cout << "Birth: " << Birth << endl;
    cout << "-------------------------\n";
}

void Person::setInf(){
    cout << "Input ID: ";   cin >> ID;
    cout << "Input Name: ";   cin >> Name;
    cout << "Input Gender: ";   cin >> Gender;
    cout << "Input Birth: ";    cin >> Birth;
    cout << "information reset.\n";
}
