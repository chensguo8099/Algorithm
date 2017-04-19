/*************************************************************************
 *磁带装载最优存储问题
 *具有贪心性质
 *************************************************************************/
#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <string.h>
using namespace std;

typedef struct softarray{
	int len;
	int array[];
}SoftArray;

SoftArray* initsoftarray(int num){
	SoftArray *tmp = (SoftArray*)malloc(sizeof(SoftArray) + num * sizeof(*(tmp->array)));
	memset(tmp, 0, sizeof(int));
	tmp->len = num;
	return tmp;
}

void swap(int *p1, int *p2){
	int tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void optimal_storage(int n){
	SoftArray *len = NULL;
	SoftArray *p = NULL;
	SoftArray *num = NULL;
	if(n > 0){
		len = initsoftarray(n);
		p = initsoftarray(n);
		num = initsoftarray(n);
	}else{
		cout << "input error" << endl;
		return;
	}
	for(int i = 0; i < n; i++)
		scanf("%d%d", &(len->array[i]), &(p->array[i]));
	for(int h = 0; h < n; h++)
		num->array[h] = (len->array[h])*(p->array[h]);

	for(int j = 0; j < n; j++){
		for(int k = j + 1; k < n; k++){
			if(num->array[j] < num->array[k])
				swap(&(num->array[j]), &(num->array[k]));
		}
	}
	double sum = 0;
	int cnt = 1;
	for(int w = 0; w < n; w++){
		sum += num->array[w]*cnt;
		cnt++;
	}
	double start = 0;
	for(int v = 0; v < n; v++)
		start += p->array[v];

	cout << sum/start << endl;
	free(len);
	free(p);
	free(num);
}

int main(){
	int n = 0;
	scanf("%d", &n);
	optimal_storage(n);
	return 0;
}
