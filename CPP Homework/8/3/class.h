#include <string>
using namespace std;

/*
类的定义
*/

class Person{
public:
    Person(); // 默认赋值
    Person(string,string,string,int);
    Person(const Person &);
    void printInf();
    void setInf();
private:
    string ID;
    string Name;
    string Gender;
    int Birth;
};

