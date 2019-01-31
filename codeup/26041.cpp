/*************************************************************************
	> File Name: 26041.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月15日 星期二 10时35分01秒
 ************************************************************************/

#include<iostream>
#include <cstdio>
using namespace std;

//杨辉三角
int main(){
    int arr[10][10]={0}, n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if((i - 1 >= 0) && (j - 1 >= 0))
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            else
                arr[i][j] = 1;

        }
    }
    for(int k = 0; k < n; k++){
        for(int m = 0; m <= k; m++){
            printf("%d ", arr[k][m]);
        }
        printf("\n");
    }

    return 0;
}
