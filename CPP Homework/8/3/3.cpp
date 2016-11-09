#include"class.cpp"

int main(){
    Person A("00001","Jack","Male",19970901);
    A.printInf();
    Person B = A;
    B.printInf();
    Person C;
    C.printInf();
    C.setInf();
    C.printInf();
    return 0;
}

/*
warning remained:
    deprecated conversion from string constant to 'char*' [-Wwrite-strings-]
*/
