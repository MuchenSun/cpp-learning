#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex{
	public:
		Complex();
		Complex(double,double);
		Complex plus(const Complex &); // 加
		Complex multiply(const Complex &); // 减
		double getimag(); // 取虚部
		void print(); // 输出
	private:
		double R,I; // R-real,I-imaginary
};

#endif // COMPLEX_H_INCLUDED
