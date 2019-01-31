/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月15日 星期二 09时46分23秒
 ************************************************************************/

#include<iostream>
#include <cstdio>
using namespace std;

//长度为10的数组输入9个由小到大的数，当输入一个数时将其插入数组再由小到大输出
int main(){
    int arr[10];
    for(int i = 0; i < 9; i++)
        scanf("%d", &arr[i]);

    int insertNum;
    scanf("%d", &insertNum);
    for(int j = 8; j > 0; j--){
        if(arr[j] > insertNum && arr[j - 1] > insertNum){
            arr[j + 1] = arr[j];
        }
        else{
            arr[j + 1] = arr[j];
            arr[j] = insertNum;
            break;
        }
    }

    for(int k = 0; k < 10; k++)
        printf("%d\n", arr[k]);

    return 0;
}
