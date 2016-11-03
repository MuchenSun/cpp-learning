#include <iostream>
using namespace std;

/// 定义类与对象 

class Date
{
	public:
		void SetDate(int y,int m,int d);
		int IsLeapYear();
		void PrintDate();
	private:
		int year,month,day;
};

int main()
{
	Date test;
	test.SetDate(2016,10,29);
	if(test.IsLeapYear())
		test.PrintDate();
	return 0;
}
 
void Date::SetDate(int y,int m,int d)
{
	year = y;
	month = m;
	day = d;
}

int Date::IsLeapYear()
{
	return ((year%4==0 && year%100!=0) || (year%400==0));
}

void Date::PrintDate()
{
	cout << year << "." << month << "." << day << endl;
}
