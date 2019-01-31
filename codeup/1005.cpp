/*************************************************************************
	> File Name: 1005.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月24日 星期四 12时20分43秒
 ************************************************************************/
#include <cstdio>
#include<iostream>
using namespace std;

int main(){
    int n, tmp, sum = 0;
    while(scanf("%d", &n) != EOF){
        for(int i = 0; i < n; i++){
            scanf("%d", &tmp);
            sum += tmp;
        }
        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}
