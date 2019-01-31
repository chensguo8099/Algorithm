/*************************************************************************
	> File Name: 1270.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月21日 星期一 11时49分17秒
 ************************************************************************/
#include<cstdio>
#include<iostream>
using namespace std;

void swap(int *n1, int *n2){
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}


int main(){
    int a1, b1, c1;
    int *a = &a1;
    int *b = &b1;
    int *c = &c1;
    scanf("%d", a);
    scanf("%d", b);
    scanf("%d", c);

    if(*a < *b)
        swap(a, b);
    if(*a < *c)
        swap(a, c);
    if(*b < *c)
        swap(b, c);

    printf("%d %d %d\n", *a, *b, *c);
    return 0;
}
