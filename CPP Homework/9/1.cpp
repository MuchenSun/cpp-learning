#include <iostream>
using namespace std;

// 1

class Poem{
public:
	// 构造函数，在主函数输出前调用
	Poem(){cout << "锄禾日当午," << endl;}; 
	// 析构函数，在主函数输出后调用
	~Poem(){cout << "谁知盘中餐。" << endl << "粒粒皆辛苦." << endl;}; 
};

Poem A; // 不改变主函数：声明全局对象

int main(){
	cout << "汗滴禾下土。" << endl;
	return 0;
}
