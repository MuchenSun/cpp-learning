#include <iostream>
using namespace std;

/// �������Ĺ��캯��

/*
	1.���캯��Date::Date()���Ա����Date::SetDate()��
	  ���ú͵���ʱ����ͬ�����ǿ��Կ�����ͨ��SetDate()
	  ���Զ���������ݳ�Ա��ֵ�������캯���� 
*/ 
class Date
{
	public:
		Date(int,int,int);
		~Date();
		void SetDate(int y,int m,int d);
		void IsLeapYear()const; /// ����Ա����
		void PrintDate()const;
	private:
		int year,month,day; 
};

int main()
{
	cout << "---------------��������" << endl;
	Date d1(2000,5,1);
	Date d2(2001,9,11);
	
	cout << "---------------���ʶ����Ա" << endl; 
	d1.SetDate(1998,6,15);
	d1.PrintDate();
	d1.IsLeapYear();
	
	d2.SetDate(2016,10,29);
	d2.PrintDate();
	d2.IsLeapYear();
	
	cout << "---------------�������ͷŶ�����Դ" << endl;
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

