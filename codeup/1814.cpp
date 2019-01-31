/*************************************************************************
	> File Name: 1814.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月24日 星期四 19时43分59秒
 ************************************************************************/
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
    int road[10001] = {0};
    int L, M, count, n, m;
    while(scanf("%d %d", &L, &M) != EOF){
        memset(road, 0, sizeof(road));
        for(int i = 0; i < M; i++){
            scanf("%d %d", &n, &m);//由n到m区间内
            for(int j = n; j <= m; j++){
                road[j] = 1;
            }
        }
        count = 0;
        for(int k = 0; k <= L; k++){
            if(road[k] == 0)   
                count++;
        }
        if(L != 0 && M != 0)
            printf("%d\n", count);
    }
    return 0;
}
