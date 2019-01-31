/*************************************************************************
	> File Name: 26052.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月15日 星期二 16时04分34秒
 ************************************************************************/

#include<iostream>
#include <cstdio>
using namespace std;

int main(){
    int arr[2][3], arr2[3][2];

    for(int i = 0; i < 6; i++)
            scanf("%d", &arr[0][i]);

    for(int m = 0; m < 2; m++){
        for(int j = 0; j < 3; j++){
            arr2[j][m] = arr[m][j];
        }
    }

    for(int n = 0; n < 3; n++){
        for(int k = 0; k < 2; k++)
            printf("%d ", arr2[n][k]);
        printf("\n");
    }

    return 0;
}
