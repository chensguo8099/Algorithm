/*************************************************************************
 *问题描述：一辆车加满油后可行驶nkm，旅途中有若干加油站，设计一个有效算法，
 *指出应在哪些加油站停靠加油，使沿途加油次数最少。并证明算法能产生最优解。
 *
 *算法设计：对于给定的n和k个加油站位置，计算最少加油次数。
 *
 *数据输入：第一行有2个正整数n和k，表示汽车加满油后可行驶nkm，且旅途中有k个
 *加油站。接下来的一行，有k+1个整数，表示第k个加油站与第k-1个加油站之间的
 *距离。第0个加油站表示出发地，汽车已加满油。第k+1个加油站表示目的地。
 ************************************************************************/

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

typedef struct softarray{
	int len;
	int array[];
}SoftArray;

SoftArray *initsoftarray(int num){
	SoftArray *tmp = (SoftArray*)malloc(sizeof(SoftArray) + (num + 1) * sizeof(*(tmp->array))); //num + 2是因为还有起点和终点
	memset(tmp, 0, sizeof(*(tmp->array)));
	tmp->len = num + 1;
	return tmp;
}

void addgas(int gas, int n){
	SoftArray *tmp = NULL;
	tmp = initsoftarray(n);
	for(int i = 0; i < n + 1; i++)
		scanf("%d", &tmp->array[i]);
	int sum = 0, cnt = 0;
	for(int j = 0; j < n + 1; j++){
		sum += tmp->array[j];
		if(gas < sum){
			cnt++;
			sum = tmp->array[j];
		}
	}
	cout << cnt << endl;
}

int main(){
	int gas = 0, n = 0;
	scanf("%d%d", &gas, &n);
	addgas(gas, n);
	return 0;
}
