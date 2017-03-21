#include <stdio.h>
#include <stdlib.h>
#define MAX  10

void swap(int *p1, int *p2){
	int tmp = 0;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int partation(int a[], int lo, int hi){
	int i = 0, j = 0, tmp = 0;
	if(lo < hi){
		tmp = a[hi];
		i = lo - 1;
		for(j=lo; j<MAX; j++){
			if(a[j] < tmp){
				swap(&a[i+1], &a[j]);
				i++;
			}
		}
		swap(&a[hi], &a[i+1]);
	}
	return i+1;
}

int randpartation(int a[], int lo, int hi){
	int rnd = 0;
	if(lo < hi){
		rnd = rand()%(hi - lo + 1) + lo;
		swap(&a[hi], &a[rnd]);
	}
	return partation(a, lo, hi);
}

void randQsort(int a[], int lo, int hi){
	int p = 0;
	if(lo < hi){
		p = randpartation(a, lo, hi);
		randQsort(a, lo, p - 1);
		randQsort(a, p + 1, hi);
	}
}

int main(){
	int a[MAX] = {6, 5, 7, 8, 1, 0, 9, 2, 4, 3};
	randQsort(a, 0, 9);
	int i = 0;
	for(i=0; i<10; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
