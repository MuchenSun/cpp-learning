#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <iomanip>
using namespace std;

/// ������

int reduce(long [],int);

int main(){ /// ��������������reduce���� 
	long ar[10] = {1,2,3,4,3,3,2,5,6,1};
	cout << "����ǰ������Ϊ:" << endl;    for(int i=0;i<10;i++){cout << setw(5) << ar[i];}
	cout << endl << "������Ԫ�ظ���Ϊ: " << reduce(ar,10) << endl;
	cout << "����������Ϊ:" << endl;    for(int i=0;i<reduce(ar,10);i++){cout << setw(5) << ar[i];}
	return 0;
} 

int reduce(long ar[],int n){
	int result; /// resultΪ��Ҫ���ص�ֵ���������Ԫ�صĸ��� 
	/// ��һ������������ 
	sort(ar,ar+10); 
	/// �ڶ������õ�result��Ϊ��Ԫ����unique��������ֵ�����һ���ظ�Ԫ�صĵ�ַ���Ĳ�
	result = unique(ar,ar+10)-&ar[0];
	/// ����������ar�в��ظ���Ԫ�ظ��Ƶ��������b�У��ٽ�b��ֵ��ar 
	long * b = new long [result];
	memcpy(b,ar,sizeof(long)*result);
	ar = b;
	/// ����������ֵ���ͷſռ� 
	delete []b;
	return result;
}
