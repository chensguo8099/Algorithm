/*************************************************************************
	> File Name: 1278.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月21日 星期一 12时31分24秒
 ************************************************************************/
#include <cstdio>
#include<iostream>
using namespace std;

int main(){
    char *a = "I love China!";
    int n;
    scanf("%d", &n);
    a = a + n;
    printf("%s\n", a);
    return 0;
}
