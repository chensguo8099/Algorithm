/*************************************************************************
	> File Name: 1015.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月13日 星期日 10时47分15秒
 ************************************************************************/
#include <cstdio>
#include<iostream>
using namespace std;

void StructMatrix(int num){
    int i, j;
    for(i=0; i<num; i++){
        for(j=0; j<num; j++){
            printf("%d ", (i+1)*(j+1));
        }
        printf("\n");
    }
}


int main(){
    int n, num, i;
    int vec[10000];
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &vec[i]);

    for(i=0; i<n; i++)
        StructMatrix(vec[i]);
    return 0;
}
