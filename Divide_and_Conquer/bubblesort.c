#include <stdio.h>

#define NUM 10

void swap(int *p1, int *p2){
	int tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void bubblesort(int *p){
	int i = 0, j = 0;
	for(i=0; i<NUM; i++){
		for(j = i + 1; j<NUM; j++){
			if(*(p + i) > *(p + j))
				swap(&p[i], &p[j]);
		}
	}
	for(i=0; i<NUM; i++)
		printf("%d ", *(p + i));
	printf("\n");
}

int main(){
	int arr[NUM] = {4, 3, 6, 1, 8, 5, 7, 2, 9, 0};
	bubblesort(arr);
	return 0;
}
