/*************************************************************************
	> File Name: 26045.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月15日 星期二 11时40分06秒
 ************************************************************************/

#include<iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
    char arr1[10000];
    char arr2[10000];
    scanf("%s", arr1);
    scanf("%s", arr2);

    for(int i = 0; i < strlen(arr1) && i < strlen(arr2); i++){
        if(arr1[i] > arr2[i]){
            printf("%d\n", arr1[i] - arr2[i]);
            break;
        }
        if(arr1[i] < arr2[i]){
            printf("%d\n", arr1[i] - arr2[i]);
            break;
        }
        if(arr1[i] == arr2[i] && (i == strlen(arr1) - 1 || i == strlen(arr2) - 1)){
            printf("0\n");
            break;
        }
    }

    return 0;
}
