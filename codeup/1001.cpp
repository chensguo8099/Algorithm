/*************************************************************************
	> File Name: 1001.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月24日 星期四 12时02分01秒
 ************************************************************************/
#include <cstdio>
#include<iostream>
using namespace std;

int main(){
    int n, a, b;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }

    return 0;
}
