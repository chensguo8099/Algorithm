/*************************************************************************
	> File Name: 1012.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月13日 星期日 10时37分48秒
 ************************************************************************/
#include <cstdio>
#include<iostream>
using namespace std;

int main(){
    float doller, max;
    scanf("%f", &doller);
    float trans[15];
    int i;
    for(i=0; i<12; i++){
        scanf("%f", &trans[i]);
    }
    max = trans[0];
    for(i=0; i<12; i++){
        if(trans[i] > max)
            max = trans[i];
    }
    printf("%.2f\n", doller * max);
    return 0;
}
