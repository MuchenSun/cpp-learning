#ifndef DOUBLEINT_H_INCLUDED
#define DOUBLEINT_H_INCLUDED

class doubleInt{
	public:
		doubleInt(int,int);
		void print(); /// ���ʣ�����Ƿ������ݳ�Ա��
		int gcd(); /// ��С����������
		int lcm(); /// ���Լ������
	private:
		int x,y;

};

#endif // DOUBLEINT_H_INCLUDED
