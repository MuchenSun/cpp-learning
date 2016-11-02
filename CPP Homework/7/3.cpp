#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <iomanip>
using namespace std;

/// 第三题

int reduce(long [],int);

int main(){ /// 主函数用来测试reduce函数 
	long ar[10] = {1,2,3,4,3,3,2,5,6,1};
	cout << "处理前的数组为:" << endl;    for(int i=0;i<10;i++){cout << setw(5) << ar[i];}
	cout << endl << "处理后的元素个数为: " << reduce(ar,10) << endl;
	cout << "处理后的数组为:" << endl;    for(int i=0;i<reduce(ar,10);i++){cout << setw(5) << ar[i];}
	return 0;
} 

int reduce(long ar[],int n){
	int result; /// result为将要返回的值，即处理后元素的个数 
	/// 第一步：排序（升序） 
	sort(ar,ar+10); 
	/// 第二步：得到result，为首元素与unique函数返回值（最后一个重复元素的地址）的差
	result = unique(ar,ar+10)-&ar[0];
	/// 第三步：将ar中不重复的元素复制到新申请的b中，再将b赋值给ar 
	long * b = new long [result];
	memcpy(b,ar,sizeof(long)*result);
	ar = b;
	/// 结束：返回值并释放空间 
	delete []b;
	return result;
}
