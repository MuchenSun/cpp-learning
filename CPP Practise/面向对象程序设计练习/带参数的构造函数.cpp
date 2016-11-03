#include <iostream>
using namespace std;

/// 带参数的构造函数

/*
	1.构造函数Date::Date()与成员函数Date::SetDate()的
	  作用和调用时机不同。我们可以看到，通过SetDate()
	  可以多次重置数据成员的值，但构造函数的 
*/ 
class Date
{
	public:
		Date(int,int,int);
		~Date();
		void SetDate(int y,int m,int d);
		void IsLeapYear()const; /// 常成员函数
		void PrintDate()const;
	private:
		int year,month,day; 
};

int main()
{
	cout << "---------------创建对象" << endl;
	Date d1(2000,5,1);
	Date d2(2001,9,11);
	
	cout << "---------------访问对象成员" << endl; 
	d1.SetDate(1998,6,15);
	d1.PrintDate();
	d1.IsLeapYear();
	
	d2.SetDate(2016,10,29);
	d2.PrintDate();
	d2.IsLeapYear();
	
	cout << "---------------结束并释放对象资源" << endl;
	return 0;
} 

Date::Date(int y,int m,int d)
{
	year = y;
	month = m;
	day = d;
	cout << year << "/" << month << "/" << day << endl;
	cout << "Date object initialized!" << endl; 
}

Date::~Date()
{
	cout << year << "/" << month << "/" << day << endl;
	cout << "Date object destroyed!" << endl; 
}

void Date::SetDate(int y,int m,int d)
{
	year = y;
	month = m;
	day = d;
}

void Date::IsLeapYear()const
{
	if((year%4==0 && year%4!=0) || (year%400==0))
	{cout << "Is Leap Year." << endl;}
	else
	{cout << "Not Leap Year." << endl;}
}

void Date::PrintDate()const
{cout << year << "/" << month << "/" << day << endl;}

