#include <iostream>
using namespace std;

/// 构造函数与析构函数

/*
	由于类体系结构的复杂性，建立类对象的初始化工
	作和释放对象资源的变化很大。
	因此，通常需要用户自定义构造函数和析构函数 
*/ 

class Date
{
	public:
		Date(); /// 可以有任意类型参数，但不能有返回类型 
		~Date(); ///  没有参数和返回类型 
		/// 对象必须在类说明外建立和撤销，所以... 
		void SetDate(int y,int m,int d);
		int IsLeapYear()const; /// 常成员函数 
		void PrintDate()const;
	private:
		int year,month,day;
		/// 私有成员，只能在类中可见，不能在类外或派生类中使用 
};

int main()
{ /// 构造函数与析构函数在何处调用？ 
	Date d;
	d.SetDate(2016,10,29);
	if(d.IsLeapYear()){d.PrintDate();}	
	return 0;
}

Date::Date()
{ /// 构造函数 ，建立类对象时自动调用 
	cout << "Date object initialized!" << endl; 
}

Date::~Date()
{ /// 析构函数 ，类对象作用域结束时自动调用 
	cout << "Date object destroyed!" << endl;
}

void Date::SetDate(int y,int m,int d)
{
	year = y;	month = m;	day = d;
}

int Date::IsLeapYear()const
{
	return ((year%4==0 && year%400!=0) || (year%100==0));
}

void Date::PrintDate()const
{
	cout << year << "." << month << "." << day << endl;
}
