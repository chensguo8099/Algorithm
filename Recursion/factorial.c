#include <stdio.h>

int fac(int n){
	if(1 == n || 0 == n)
		return 1;
	return n*fac(n - 1);
}

int main(){
	int num = 0;
	scanf("%d", &num);	
	printf("num is = %d\n",fac(num));
	return 0;
}
