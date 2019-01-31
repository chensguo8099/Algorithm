/*************************************************************************
	> File Name: 1284.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月21日 星期一 18时56分09秒
 ************************************************************************/
#include <cstdio>
#include<iostream>
using namespace std;

void findMax(int *ptr){
    int *ptr_temp = ptr;
    int maxNum = *ptr;
    int n = 0, temp;
    for(int i = 0; i < 10; i++){
        if(maxNum < *ptr){
            maxNum = *ptr;
            n = i;
        }
        ptr++;
    }
    ptr = ptr_temp;
    temp = *(ptr+n);
    *(ptr+n) = *(ptr+9);
    *(ptr+9) = temp;
}
void findMin(int *ptr){
    int *ptr_temp = ptr;
    int minNum = *ptr;
    int n = 0, temp;
    for(int i = 0; i < 10; i++){
        if(minNum > *ptr){
            minNum = *ptr;
            n = i;
        }
        ptr++;
    }
    ptr = ptr_temp;
    temp = *(ptr+n);
    *(ptr+n) = *ptr;
    *ptr = temp;
}


int main(){
    int arr[10];
    int *p = arr;
    for(int i = 0; i < 10; i++){
        scanf("%d", p);
        p++;
    }
    findMax(arr);
    findMin(arr);
    p = arr;
    for(int j = 0; j < 9; j++){
        printf("%d ", *p);
        p++;
    }
    printf("%d\n", *p);
    return 0;
}
