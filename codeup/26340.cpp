/*************************************************************************
	> File Name: 26340.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月20日 星期日 23时15分43秒
 ************************************************************************/
#include<iostream>
#include <cstdio>
#include <cstring>
using namespace std;

void findString(char *str){
    char arr[1000];
    int i = 0;
    while(*str != '\0'){
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U'){
            arr[i] = *str;
            i++;
        }
        str++;
    }
    arr[i] = '\0';
    printf("%s\n", arr);
}

int main(){
    char str[1000];
    char* find;
    fgets(str, 1000, stdin);
    //清除fgets读入的回车
    find = strchr(str, '\n');
    if(find)
        *find = '\0';
    
    findString(str);

    return 0;
}
