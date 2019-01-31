/*************************************************************************
	> File Name: 26055.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月15日 星期二 16时21分59秒
 ************************************************************************/

#include<iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
    char str[3][1000];
    char string[1000];
    for(int i = 0; i < 3; i++)
        fgets(str[i], 10000, stdin);

    if(strcmp(str[0], str[1]) > 0)
        strcpy(string, str[0]);
    else
        strcpy(string, str[1]);

    if(strcmp(string, str[2]) < 0)
        strcpy(string, str[2]);

    printf("%s", string);
        
    return 0;
}
