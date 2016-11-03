#include <iostream>
using namespace std;

/// ���캯������������

/*
	��������ϵ�ṹ�ĸ����ԣ����������ĳ�ʼ����
	�����ͷŶ�����Դ�ı仯�ܴ�
	��ˣ�ͨ����Ҫ�û��Զ��幹�캯������������ 
*/ 

class Date
{
	public:
		Date(); /// �������������Ͳ������������з������� 
		~Date(); ///  û�в����ͷ������� 
		/// �����������˵���⽨���ͳ���������... 
		void SetDate(int y,int m,int d);
		int IsLeapYear()const; /// ����Ա���� 
		void PrintDate()const;
	private:
		int year,month,day;
		/// ˽�г�Ա��ֻ�������пɼ����������������������ʹ�� 
};

int main()
{ /// ���캯�������������ںδ����ã� 
	Date d;
	d.SetDate(2016,10,29);
	if(d.IsLeapYear()){d.PrintDate();}	
	return 0;
}

Date::Date()
{ /// ���캯�� �����������ʱ�Զ����� 
	cout << "Date object initialized!" << endl; 
}

Date::~Date()
{ /// �������� ����������������ʱ�Զ����� 
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
