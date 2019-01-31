/*************************************************************************
	> File Name: 1209.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月23日 星期三 23时07分48秒
 ************************************************************************/
#include <cstdio>
#include<iostream>
using namespace std;

typedef struct stu {
    int num;
    char name[20];
    int score[3];
}stuInfo;


void input(stuInfo *ptr){
    for(int i = 0; i < 5; i++){
        scanf("%d %s %d %d %d", &(ptr+i)->num, (ptr+i)->name, &(ptr+i)->score[0], &(ptr+i)->score[1], &(ptr+i)->score[2]);
    }
}

void print(stuInfo *ptr){
    for(int i = 0; i < 5; i++){
        printf("%d %s %d %d %d\n", (ptr+i)->num, (ptr+i)->name, (ptr+i)->score[0], (ptr+i)->score[1], (ptr+i)->score[2]);
    }
}

int main(){
    stuInfo person[5];
    input(person);
    print(person);
    return 0;
}
