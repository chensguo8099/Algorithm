/*子集合问题，找到错的就陷入死循环了，为也很绝望啊。。。*/
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#define TURE 1
using namespace std;

typedef struct softarray{
	int len;
	int array[];
}SoftArray;

SoftArray *create_softarray(int N){
	SoftArray *tmp = (SoftArray *)malloc(sizeof(SoftArray) + N*sizeof(tmp->array[0]));
	tmp->len = N;
	return tmp;
}

int maxloading(SoftArray* p, SoftArray* rec, int num, int N, SoftArray* cnt){
	int find = 0; //当前层
	int real_sum = 0;//当前装载
	int tmp = 0;
	int flag = 1;
	memset(cnt, 0, sizeof(cnt));
	while(TURE){
		while(find < N && real_sum + p->array[find] <= num){
			real_sum += p->array[find];
			rec->array[find] = 1;
			cnt->array[find] = p->array[find];
			find++;
		}
		find--;
		if(find < N){//进入右子树
			while(find > 0 && !rec->array[find])
				find--;
			if(real_sum == num)
				return real_sum;
		}
		rec->array[find] = 0;
		cnt->array[find] = 0;
		real_sum -= p->array[find];
		find++;
	}
}

int main(){
	int N, num;//N为个数 num为规定的和
	SoftArray *p;
	SoftArray *rec;
	scanf("%d%d", &N, &num);//输入个数N及数的大小num
	p = create_softarray(N);//创建空间
	rec = create_softarray(N);
	SoftArray *cnt;
	cnt = create_softarray(N);
	for(int i = 0; i < N; i++)
		scanf("%d", &p->array[i]);//录入数据
	printf("%d\n", maxloading(p, rec, num, N, cnt));
	int j = 0;
	while(j < N){
		if(cnt->array[j] != 0)
			printf("%d ", cnt->array[j]);
		j++;
	}
	return 0;
}
