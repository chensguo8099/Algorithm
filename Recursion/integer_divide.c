#include <stdio.h>

int func(int divide_num, int max_num){
	if(1 == divide_num || 1 == max_num)
		return 1;
	else if(divide_num < max_num)
		return func(divide_num, divide_num);
	else if(divide_num == max_num)
		return func(divide_num, divide_num - 1) + 1;
	else if(divide_num > max_num && max_num > 1)
		return func(divide_num, max_num - 1) + func(divide_num - max_num, max_num);
}

int main(){
	int divide = 0, max = 0;
	scanf("%d %d", &divide, &max);
	printf("divide num is : %d\n", func(divide, max));
	return 0;
}
