/*************************************************************************
	> File Name: 1306.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月23日 星期三 19时06分47秒
 ************************************************************************/
#include <stdio.h>

struct person{
    int num;
    char name[10];
    char sex;
    char job;
    union {
        int class;
        char position[10];
    }category;
};
typedef struct person per;

int main(){
    per people[100];
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %s %c %c", &people[i].num, people[i].name, &people[i].sex, &people[i].job);
        if(people[i].job == 's')
            scanf("%d", &people[i].category.class);
        if(people[i].job == 't')
            scanf("%s", people[i].category.position);
    }

    for(int j = 0; j < n; j++){
        printf("%d %s %c %c", people[j].num, people[j].name, people[j].sex, people[j].job);
        if(people[j].job == 's')
            printf(" %d\n", people[j].category.class);
        if(people[j].job == 't')
            printf(" %s\n", people[j].category.position);
    }

    return 0;
}
