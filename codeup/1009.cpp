/*************************************************************************
	> File Name: 1009.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月13日 星期日 10时22分54秒
 ************************************************************************/
#include <cstdio>
#include<iostream>
using namespace std;

int main(){
    float a[15], average;
    average = 0;
    int i = 0;
    for(i = 0; i < 12; i++){
        scanf("%f", &a[i]);
    }
    for(i = 0; i < 12; i++){
        average += a[i];
    }
    printf("￥%.2f\n", average/12.0);
    return 0;
}
