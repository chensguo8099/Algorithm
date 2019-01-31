/*************************************************************************
	> File Name: 2.5.4.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月14日 星期一 11时22分33秒
 ************************************************************************/

#include<stdio.h>
#include <string.h>

int main(){
    int i;
    int a[5] = {1, 2, 3, 4, 5};
    
    //赋0
    memset(a, 0, sizeof(a));
    for(i = 0; i < 5; i++){
        printf("%d", a[i]);
    }
    printf("\n");
    
    memset(a, -1, sizeof(a));
    for(i = 0; i < 5; i++){
        printf("%d", a[i]);
    }
    printf("\n");

    memset(a, -255, sizeof(a));
    for(i = 0; i < 5; i++){
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}
