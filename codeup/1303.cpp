/*************************************************************************
	> File Name: 1303.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月23日 星期三 18时20分50秒
 ************************************************************************/

#include<iostream>
#include <cstdio>
using namespace std;

struct person {
    char name[20];
    int count;
}leader[3] = {"Li", 0, "Zhang", 0, "Fun", 0};

int main(){
    int n;
    char name[20];
    char *ptr = name;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s", name);
        if(name[0] == 'L')
            leader[0].count++;
        else if(name[0] == 'Z')
            leader[1].count++;
        else if(name[0] == 'F')
            leader[2].count++;
    }

    printf("Li:%d\n", leader[0].count);
    printf("Zhang:%d\n", leader[1].count);
    printf("Fun:%d\n", leader[2].count);

    return 0;
}
