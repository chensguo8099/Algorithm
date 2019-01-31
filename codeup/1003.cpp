/*************************************************************************
	> File Name: 1003.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月24日 星期四 12时07分54秒
 ************************************************************************/
#include <cstdio>
#include<iostream>
using namespace std;

int main(){
    int n = -1, sum = 0, tmp;
    while(n != 0){
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            scanf("%d", &tmp);
            sum += tmp;
        }
        if(sum != 0)
            printf("%d\n", sum);
        sum = 0;
    }
    return 0;
}
