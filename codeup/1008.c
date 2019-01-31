/*************************************************************************
	> File Name: 1008.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月13日 星期日 10时03分29秒
 ************************************************************************/

#include<stdio.h>
#include <stdlib.h>

int main(){
    int i, num;
    scanf("%d", &num);
    int *p = (int *)malloc(sizeof(int) * (num + 1));

    for(i=0; i<num; i++){
        scanf("%d", p + i);
    }
    for(i=0; i<num; i++){
        printf("%c", *(p+i));
    }
    printf("\n");
    return 0;
}
