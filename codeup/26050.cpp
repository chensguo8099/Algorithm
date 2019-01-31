/*************************************************************************
	> File Name: 26050.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月15日 星期二 15时45分05秒
 ************************************************************************/

#include<iostream>
#include <cstdio>
using namespace std;

int main(){
    int arr[25] = {1, 1};
    for(int i = 2; i < 20; i++)
        arr[i] = arr[i - 1] + arr[i - 2];

    for(int j = 0; j < 20; j++)
        printf("%d\n", arr[j]);
    return 0;
}
