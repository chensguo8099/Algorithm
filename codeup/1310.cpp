/*************************************************************************
	> File Name: 1310.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月23日 星期三 23时23分18秒
 ************************************************************************/
#include <cstdio>
#include<iostream>
using namespace std;

typedef struct stu{
    int num;
    char name[20];
    int score[3];
}stuInfo;


int main(){
    stuInfo person[10];

    for(int i = 0; i < 10; i++){
        scanf("%d %s %d %d %d", &person[i].num, person[i].name, &person[i].score[0], &person[i].score[1], &person[i].score[2]);
    }

    float Score1, Score2, Score3;
    int n, avg, sum, temp = 0;
    for(int j = 0; j < 10; j++){
        Score1 += person[j].score[0];
        Score2 += person[j].score[1];
        Score3 += person[j].score[2];
        sum = person[j].score[0] + person[j].score[1] + person[j].score[2];
        if(sum > temp){
            temp = sum;
            n = j;
        }
    }
    printf("%.2f %.2f %.2f\n", Score1/10.0, Score2/10.0, Score3/10.0);
    printf("%d %s %d %d %d\n", person[n].num, person[n].name, person[n].score[0], person[n].score[1], person[n].score[2]);

    return 0;
}
