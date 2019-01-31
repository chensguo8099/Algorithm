/*************************************************************************
	> File Name: 1283.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月21日 星期一 12时44分45秒
 ************************************************************************/
#include <cstdio>
#include<iostream>
#include <cstring>
using namespace std;

int main(){
    char str1[100];
    char str2[100];
    char str3[100];
    char string_temp[100];
    char *p1 = str1;
    char *p2 = str2;
    char *p3 = str3;

    scanf("%s", p1);
    scanf("%s", p2);
    scanf("%s", p3);

    if(strcmp(p1, p2) > 0){
        strcpy(string_temp, p1);
        strcpy(p1, p2);
        strcpy(p2, string_temp);
    }
    if(strcmp(p1, p3) > 0){
        strcpy(string_temp, p1);
        strcpy(p1, p3);
        strcpy(p3, string_temp);
    }
    if(strcmp(p2, p3) > 0){
        strcpy(string_temp, p2);
        strcpy(p2, p3);
        strcpy(p3, string_temp);
    }

    printf("%s\n%s\n%s\n", p1, p2, p3);
    return 0;
}
