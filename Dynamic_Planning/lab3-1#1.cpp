#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

void MatrixChain(int *p, int n, int **m, int **s){
	for(int r=2; r<=n; r++){
		for(int i=1; i<=n; i++){
			int j = i + r - 1;
			m[i][j] = m[i+1][j] + p[i-1]*p[i]*p[j];
			s[i][j] = i;
			for(int k=i+1; k<j; k++){
				int t = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
				if(t < m[i][j]){
					m[i][j] = t;
					s[i][j] = k;
				}
			}
		}
	}
}

void Traceback(int i, int j, int **s){
	if(i == j)
		return;
	cout << "(";
	Traceback(i, s[i][j], s);
	Traceback(s[i][j] + 1, j, s);
	cout << ")";
}

int main(){
	int **m = (int **)malloc(sizeof(int) * 7);
	int **s = (int **)malloc(sizeof(int) * 7);

	for(int i=1; i<=6; i++){
		m[i] = (int *)malloc(sizeof(int) * 7);
		s[i] = (int *)malloc(sizeof(int) * 7);
	}

	int p[7] = {30, 35, 15, 5, 10, 20, 25};
/*数组p[6]
 *A1:30*35	  A2:35*15 	  A3:15*5	 A4:5*10	A5:10*20	A6:20*25
 *用来存放A1，A2，A3，A4，A5，A6矩阵边长
*/
	MatrixChain(p, 6, m, s);
	for(int i=1; i<=6; i++){
		for(int j=1; j<=6; j++)
			cout << m[i][j] << "\t";
		cout << endl;
	}
	Traceback(1, 6, s);

	return 0;
}
