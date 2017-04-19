/*********************************************************************
会场安排问题：
1.问题描述：假设要在足够多的会场里安排一批活动，并希望使用尽可能少的会场。
设计一个有效的贪心算法进行安排（这个问题实际上是著名的图着色问题。若将每
一个活动作为图的一个顶点，不相容活动间用边相连。使相邻顶点着有不同颜色的
最小着色数，相应于要找的最小会场数）。
2.算法设计：对于给定的k个待安排的活动，计算使用最少会场的时间表。
3.数据输入：第一行有1个正整数k，表示有k个待安排的活动。接下来的k行中，每
行有2个正整数，分别表示k个待安排的活动的开始时间和结束时间。时间以0点开始
的分钟计。
结果输出：将计算的最少会场数输出。
***********************************************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define MAX 50
using namespace std;

void swap(int *p1, int *p2){
	int tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int main(){
	int n = 0, i = 0, h = 0, tmp = 0, cnt = 1;
	int pre[MAX] = {0};
	int next[MAX] = {0};

	scanf("%d", &n);
	int max = n;

	while(n--){
		scanf("%d%d", &pre[i], &next[i]);
		i++;
	}
	for(int j = 0; j < max; j++){
		for(int k = j + 1; k < max; k++){
			if(next[j] > next[k]){
				swap(&pre[j], &pre[k]);
				swap(&next[j], &next[k]);
			}
		}
	}//按照next排序
	while(max - h){
		if(next[i] < pre[h]){
			cnt++;
			i = ++h;
		}
		h++;
	}
	printf("%d\n", cnt);
	return 0;
}
