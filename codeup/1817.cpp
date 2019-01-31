/*************************************************************************
	> File Name: 1817.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月24日 星期四 20时21分57秒
 ************************************************************************/
#include <cstdio>
#include<iostream>
#include <cstring>
using namespace std;

long trans(int len, char *ptr){
    long val = 0, advance = 1;
    for(int i = len - 1; i >= 0; i--){
        if(*(ptr+i) >= '0' && *(ptr+i) <= '9'){
            val += (*(ptr+i) - 48) * advance;
            advance *= 10;
        }
    }
    if(*ptr == '-')
        val = -val;

    return val;
}

int main(){
    char num1[20];
    char num2[20];
    while(scanf("%s %s", num1, num2) != EOF){
        //-32,124
        int len1 = strlen(num1);
        int len2 = strlen(num2);
        printf("%ld\n", trans(len1, num1) + trans(len2, num2));
    }

    return 0;
}
