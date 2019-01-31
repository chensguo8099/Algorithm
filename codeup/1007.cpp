/*************************************************************************
	> File Name: 1007.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月24日 星期四 12时27分46秒
 ************************************************************************/
#include <cstdio>
#include<iostream>
using namespace std;

int main(){
    int n, sum = 0, tmp, number;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &number);
        for(int j = 0; j < number; j++){
            scanf("%d", &tmp);
            sum += tmp;
        }
        printf("%d\n\n", sum);
        sum = 0;
    }
    return 0;
}
