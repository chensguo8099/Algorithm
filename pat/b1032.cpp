/*************************************************************************
	> File Name: b1032.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月24日 星期四 13时30分57秒
 ************************************************************************/
#include <cstdio>
#include<iostream>
using namespace std;

int main(){
    int n, tmp, number, max_tmp;
    int arr[100001] = {0};
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &tmp, &number);
        arr[tmp] += number;
    }
    int max = -1, res;
    for(int j = 0; j <= n; j++){
        if(arr[j] > max){
            max = arr[j];
            res = j;
        }
    }
    printf("%d %d\n", res, max);
    return 0;
}
