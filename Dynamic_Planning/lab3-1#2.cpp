/******************
 * 最长公共子序列 *
 * ****************/

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
	char str1[] = "BDCABA";
	char str2[] = "ABCBABA";

	int str1_len = strlen(str1);
	int str2_len = strlen(str2);//将两个字符串长度计算

	int map[str2_len + 1][str1_len + 1];
	int recd[str2_len + 1][str1_len + 1];
	memset(map, 0, sizeof(map));//创建图，初始化为0
	memset(recd, 0, sizeof(recd));//1:左上	2:上	3:左
	for(int i = 1; i < str2_len + 1; i++){
		for(int j = 1; j < str1_len + 1; j++){
			if(str1[j-1] == str2[i-1]){
				map[i][j] = map[i - 1][j - 1] + 1;
				recd[i][j] = 1;
			}
			else if(map[i-1][j] >= map[i][j-1]){
				map[i][j] = map[i-1][j];
				recd[i][j] = 2;
			}else{
				map[i][j] = map[i][j-1];
				recd[i][j] = 3;
			}
		}
	}
#if 1
	for(int a = 0; a < str2_len + 1; a++){
		for(int b = 0; b < str1_len + 1; b++)
			cout << recd[a][b];
		cout << endl;
	}
#endif

	int m = str2_len;
	int n = str1_len;
	while(m!=0 && n!=0){
		if(recd[m][n] == 1){
			printf("%c", str2[m - 1]);
			m -= 1;
			n -= 1;
		}
		else if(recd[m][n] == 2)
			m -= 1;
		else if(recd[m][n] == 3)
			n -= 1;
	}
	return 0;
}
