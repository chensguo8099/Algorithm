/*************************************************************************
	> File Name: 26044.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月15日 星期二 11时11分42秒
 ************************************************************************/

#include <cstdio>
#include <cstring>
#include<iostream>
using namespace std;

int main(){
    char arr[10000];
    scanf("%s", arr);

    for(int i = 0; i < strlen(arr); i++){
        if(arr[i] >= 65 && arr[i] <= 90)
            arr[i] = 155 - arr[i];
        else if(arr[i] >= 97 && arr[i] <= 122)
            arr[i] = 219 - arr[i];
    }
    printf("%s\n", arr);

    return 0;
}
