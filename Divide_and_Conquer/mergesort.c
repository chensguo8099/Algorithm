#include <stdio.h>
#define MAX 10

int a[MAX] = {12, 324, 33, 65, 455, 11, 57, 44, 765, 253};
int reg[MAX] = {0};

void merging(int low, int mid, int high){
	int i = low;
	int start1 = low;
	int start2 = mid + 1;
	while(start1 <= mid && start2 <= high)
		reg[i++] = a[start1]<a[start2] ? a[start1++]:a[start2++];
	while(start1 <= mid)
		reg[i++] = a[start1++];
	while(start2 <= high)
		reg[i++] = a[start2++];
	for(i=low; i<=high; i++)
		a[i] = reg[i];
}

void mergesort(int low, int high){
	if(low >= high)
		return;
	int mid = (low + high)/2;
	mergesort(low, mid);
	mergesort(mid + 1, high);
	merging(low, mid, high);
}


int main(){
	int i = 0;
	mergesort(0, MAX - 1);
	for(i=0; i<MAX; i++)
		printf("%d ", a[i]);
	return 0;
}
