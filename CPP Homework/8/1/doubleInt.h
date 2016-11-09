#ifndef DOUBLEINT_H_INCLUDED
#define DOUBLEINT_H_INCLUDED

class doubleInt{
	public:
		doubleInt(int,int);
		void print(); /// 疑问：这个是访问数据成员吗？
		int gcd(); /// 最小公倍数方法
		int lcm(); /// 最大公约数方法
	private:
		int x,y;

};

#endif // DOUBLEINT_H_INCLUDED
