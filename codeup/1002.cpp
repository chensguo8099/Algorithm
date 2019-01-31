/*************************************************************************
	> File Name: 1002.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月24日 星期四 12时04分54秒
 ************************************************************************/
#include <cstdio>
#include<iostream>
using namespace std;

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    while(a != 0 && b != 0){
        printf("%d\n", a+b);
        scanf("%d %d", &a, &b);
    }

    return 0;
}
