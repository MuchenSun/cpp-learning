#include <iostream>
using namespace std;

/// ���ʶ����Ա 

class Tclass
{
	public:
		int x,y;
		void print()
		{
			cout << x << " , " << y << endl;
		}; /// attention!
};

int add(Tclass * ptf)
{
	return (ptf->x + ptf->y);
} 

int main()
{
	//////////////////////////////////////// ���ʶ���Ĺ��г�Ա
	Tclass test;
	test.x = 100;
	test.y = 200;
	test.print(); 
	
	//////////////////////////////////////// ��ָ����ʶ����Ա
	Tclass *pt = &test;
	pt->x = 150;
	pt->y = 250;
	pt->print(); 
	cout << "x+y = " << add(&test) << endl; 
	 
	//////////////////////////////////////// ���� 
	return 0;
} 
