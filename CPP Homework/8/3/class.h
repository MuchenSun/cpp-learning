#include <string>
using namespace std;

/*
��Ķ���
*/

class Person{
public:
    Person(); // Ĭ�ϸ�ֵ
    Person(char *,char *,char *,int);
    Person(const Person &);
    void printInf();
    void setInf();
private:
    string ID;
    string Name;
    string Gender;
    int Birth;
};

