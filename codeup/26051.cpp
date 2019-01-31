/*************************************************************************
	> File Name: 26051.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月15日 星期二 16时03分26秒
 ************************************************************************/
#include<iostream>
#include <cstdio>
using namespace std;

int main(){
    int arr[10];
    int temp;
    for(int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    for(int m = 0; m < 9; m++){
        for(int j = 0; j < 10 - m - 1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for(int n = 0; n < 10; n++)
        printf("%d\n", arr[n]);

    return 0;
}

