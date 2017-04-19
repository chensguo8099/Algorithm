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
