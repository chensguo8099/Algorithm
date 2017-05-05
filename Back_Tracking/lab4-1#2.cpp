#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int w[100][100]; //w[i][j]为第i个零件在第j个供应商的重量
int c[100][100]; //c[i][j]为第i个零件在第j个供应商的价格
int bestx[100]; //bestx[i]表示一次搜索到底后的最优解，用来存放第i个零件的供应商
int x[100]; //x[i]临时存放第i个零件的供应商
int cw = 0, cc = 0, bestw = 10000;

int cost; //限定价格
int n; //部件数
int m; //供应商
void Backtrack(int t){
	int j;
	if(t > n){
		bestw = cw;
		for(j = 1; j <= n; j++)
			bestx[j] = x[j];
	}else{
		for(j = 1; j <= n; j++){
			if(cc + c[t][j] <= cost && cw + w[t][j] < bestw){
				x[t] = j;
				cc += c[t][j];
				cw += w[t][j];
				Backtrack(t + 1);
				cc -= c[t][j];
				cw -= w[t][j];
			}
		}
	}
}

int main(){
	int i, j;
	cin >> n >> m >> cost;
	for(i = 1; i <= n; i++)
		for(j = 1; j <= m; j++)
			cin >> w[i][j];
	for(i = 1; i <= n; i++)
		for(j = 1; j <= m; j++)
			cin >> c[i][j];
	Backtrack(1);
	cout << bestw << endl;
	for(i = 1; i <= n; i++)
		cout << bestx[i] << ' ';
	return 0;
}

