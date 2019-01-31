/*************************************************************************
	> File Name: b1001.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月24日 星期四 13时20分23秒
 ************************************************************************/
#include <cstdio>
#include<iostream>
using namespace std;

int main(){
    int num;
    int count = 0;
    scanf("%d", &num);

    while(num != 1){
        if(num%2 == 0)
            num /= 2;
        else
            num = (3*num + 1)/2;
        count++;
    }
    printf("%d\n", count);
    return 0;
}
