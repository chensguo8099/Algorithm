/*************************************************************************
	> File Name: 26049.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月15日 星期二 15时40分00秒
 ************************************************************************/

#include<iostream>
#include <cstdio>
using namespace std;

int main(){
    int arr[10];
    for(int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    for(int j = 9; j >= 0; j--)
        printf("%d\n", arr[j]);

    return 0;
}
