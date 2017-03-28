#include <stdio.h>

int set(int num){
	int i = 1;
	int cnt = 1;
	if(num > 1){
		for(i=1; i<=(num/2); i++)
			cnt += set(i);
	}
	return cnt;
}

int main(){
	int buf = 0, time = 0;

	printf("please input the num : ");
	scanf("%d", &buf);
	
	if(buf < 1)
		printf("error input!\n");

	time = set(buf);

	printf("output num is : %d\n", time);
	return 0;
}
