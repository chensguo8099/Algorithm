/*************************************************************************
	> File Name: 26040.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月15日 星期二 10时20分09秒
 ************************************************************************/

#include<iostream>
#include <cstdio>
using namespace std;

int main(){
    int arr[10], temp;
    for(int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    for(int j = 0; j < 5; j++){
        temp = arr[j];
        arr[j] = arr[9 - j];
        arr[9 - j] = temp;
    }

    for(int k = 0; k < 10; k++)
        printf("%d\n", arr[k]);

    return 0;
}
