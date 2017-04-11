#include <stdio.h>
#include <string.h>

#define N 128
int matrix[N][N] = {0};

void fun(int n){
	int i, j;
	if(n <= 0)
		return;

	if(n > 2){
		fun(n/2);
		for(i = 1; i <= n/2; i++){
			for(j = n/2 + 1; j <=n; j++)
				matrix[i][j] = matrix[i][j - n/2] + n/2;
		}

		for(i = n/2 + 1; i <= n; i++){
			for(j = 1; j <= n/2; j++)
				matrix[i][j] = matrix[i - n/2][j + n/2];
		}

		for(i = n/2 + 1; i <= n; i++){
			for(j = n/2 + 1; j <= n; j++)
				matrix[i][j] = matrix[i - n/2][j - n/2];
		}
	}
	else{
		matrix[1][1] = 1;
		matrix[1][2] = 2;
		matrix[2][1] = 2;
		matrix[2][2] = 1;
	}
}

int main(){
	fun(8);
	int i, j;
	for(i = 1; i <= 8; i++){
		for(j = 1; j <= 8; j++)
			printf("%d ", matrix[i][j]);
		printf("\n");
	}
	return 0;
}

