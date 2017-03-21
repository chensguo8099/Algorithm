#include <stdio.h>
#include <stdlib.h>

#define NUM 4
int judge(char a[NUM], int k, int i){
	int tmp;
	if(i > k){
		for(tmp = k; tmp < i; tmp++){
			if(a[tmp] == a[i])
				return 0;
		}
	}
	return 1;
}

void swap(char* p1, char* p2){
	char tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}


void perm(char a[NUM], int num, int k){
	int i = 0;
	if(num == k){
		printf("string is : %s\n", a);
	}
	for(i = k; i < num; i++){
		if(!judge(a, k, i))
			continue;
		swap(&a[i], &a[k]);
		perm(a, num, k + 1);
		swap(&a[i], &a[k]);
	}
}

int main(){
	char a[NUM + 1] = "aacc";
	perm(a, NUM, 0);
	return 0;
}
