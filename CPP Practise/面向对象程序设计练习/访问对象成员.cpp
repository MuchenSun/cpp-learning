#include <iostream>
using namespace std;

/// 访问对象成员 

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
	//////////////////////////////////////// 访问对象的共有成员
	Tclass test;
	test.x = 100;
	test.y = 200;
	test.print(); 
	
	//////////////////////////////////////// 用指针访问对象成员
	Tclass *pt = &test;
	pt->x = 150;
	pt->y = 250;
	pt->print(); 
	cout << "x+y = " << add(&test) << endl; 
	 
	//////////////////////////////////////// 结束 
	return 0;
} 
