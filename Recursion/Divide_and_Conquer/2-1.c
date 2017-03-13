#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 10 // MAX>0

int main(){
	int arr[MAX];
	//int arr[MAX] = {2, 2, 2, 3, 3, 3, 4, 4, 4, 4};
	int max_num = 0, i = 0, temp = 0;
	int cnt = 0;

#if 1
	memset(arr, 0, sizeof(arr));  //bzero(arr, sizeof(arr));
	for(i=0; i<MAX; i++)
		scanf("%d", &arr[i]);  //input the num
#endif
	max_num = arr[0];

	for(i=1; i<MAX; i++){
		if(arr[i] > max_num)
			max_num = arr[i];
	}//search the max num before calloc
	int *p = (int *)calloc(max_num + 1, sizeof(int));

	for(i=0; i<MAX; i++){
		p[arr[i]]++;
	}//add the num

	for(i=0; i<MAX; i++){
		if(p[arr[i]] > cnt){
			cnt = p[arr[i]];
			max_num = i;
		}
	}
	printf("the num is : %d\nrepeat %d times.\n", arr[max_num], cnt);
	free(p);
	return 0;
}
