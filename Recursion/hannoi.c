#include <stdio.h>

void move(int i, int j){
	printf("From %d to %d\n", i, j);
}

void han(int n, int From, int Buffer, int To){
	if(n == 1)
		move(From, To);
	else{
		han(n - 1, From, To, Buffer);
		move(From, To);
		han(n - 1, Buffer, From, To);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	han(n, 1, 2, 3);
	return 0;
}
