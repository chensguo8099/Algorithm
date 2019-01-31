/*************************************************************************
	> File Name: 1304.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月23日 星期三 18时42分40秒
 ************************************************************************/
#include <cstdio>
#include<iostream>
using namespace std;

struct student {
    int num;
    char name[20];
    char sex;
    int age;
};

typedef struct student stu;

int main(){
    stu people[20];
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %s %c %d", &people[i].num, people[i].name, &people[i].sex, &people[i].age);
    }
    for(int j = 0; j < n; j++){
        printf("%d %s %c %d\n", people[j].num, people[j].name, people[j].sex, people[j].age);
    }

    return 0;
}
