#include <string>
using namespace std;

/*
��Ķ���
*/

class Person{
public:
    Person(); // Ĭ�ϸ�ֵ
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

