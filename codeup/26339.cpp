/*************************************************************************
	> File Name: 26339.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月15日 星期二 16时43分56秒
 ************************************************************************/
#include <cstring>
#include<iostream>
#include <cstdio>
using namespace std;

void Reverse(char *str){
    char arr[1000];
    int n = 0;
    while(*str != '\0'){
        str++;
        n++;
    }
    str--;
    str--;
    n--;
    for(int i = n; i >= 0; i--){
        arr[n - i] = *str;
        str--;
    }
    arr[n + 1] = '\0';
    printf("%s\n", arr);
}

int main(){
    char str[1000];
    fgets(str, 1000, stdin);
    Reverse(str);
    return 0;
}
