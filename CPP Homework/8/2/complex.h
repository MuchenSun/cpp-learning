#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex{
	public:
		Complex();
		Complex(double,double);
		Complex plus(const Complex &); // ��
		Complex multiply(const Complex &); // ��
		double getimag(); // ȡ�鲿
		void print(); // ���
	private:
		double R,I; // R-real,I-imaginary
};

#endif // COMPLEX_H_INCLUDED
