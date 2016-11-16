#include <iostream>
#include <iomanip>
using namespace std;

// 3

int m,n,r;
int A[8][8];
int B[8][8];
int C[8][8];

void init(); // 初始化
void input(int [][8]); // 输入矩阵
void calcul(); // 计算矩阵乘积
void output(); // 输出计算结果

// 主函数部分
int main(){
	cout << "please input m,n and r: ";
	cin >> m >> n >> r;
	init();	// 进行初始化工作
	cout << "please input matrix A:\n";
	input(A); 
	cout << "please input matrix B:\n";
	input(B); 	
	calcul();	// 输入矩阵A
	output();	// 输入矩阵B
	return 0;
}

void init(){ // i表示行，j表示列
	int i,j; 
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			// 统一赋初值为0
			A[i][j] = B[i][j] = C[i][j] = 0;
			// 确定矩阵大小之后，进行标记，如下所示
			A[m][j] = A[i][n] = B[n][j] = B[i][r] = 1;
		}
	}
}
/* 
Example: m=3,n=3
0	0	0	1	0	

0	0	0	1	0	

0	0	0	1	0	

1	1	1	1	0	

0	0	0	0	0	
*/

void input(int a[][8]){
	int i,j;
	for(i=0;a[i][0]!=1;i++){
		for(j=0;a[i][j]!=1;j++){
			cin >> a[i][j];
		}
	}
}

void calcul(){
	int i,j,k;
	for(i=0;i<m;i++){
		for(j=0;j<r;j++){
			for(k=0;k<n;k++){
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
}

void output(){
	int i,j;
	cout << "Result: A * B = \n";
	for(i=0;i<m;i++){
		for(j=0;j<r;j++){
			cout << setw(3) << C[i][j];
		}
		cout << endl;
	}
} 
