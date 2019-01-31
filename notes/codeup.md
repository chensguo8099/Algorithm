## 1817.A+B Problem
#### 题目描述

给定两个整数A和B，其表示形式是：从个位开始，每三位数用逗号","隔开。现在请计算A+B的结果，并以正常形式输出。

#### 输入
输入包含多组数据数据，每组数据占一行，由两个整数A和B组成（-10^9 < A,B < 10^9）。

#### 输出
请计算A+B的结果，并以正常形式输出，每组数据占一行。

#### 样例输入
```
-234,567,890 123,456,789
1,234 2,345,678
```
#### 样例输出
```
-111111101
2346912
```

```c++
#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

long trans(int len, char *ptr){
    long val = 0, advance = 1;
    for(int i = len - 1; i >= 0; i--){
        if(*(ptr+i) >= '0' && *(ptr+i) <= '9'){
            val += (*(ptr+i) - 48) * advance;
            advance *= 10;
        }
    }
    if(*ptr == '-')
        val = -val;
    return val;
}

int main(){
    char num1[20];
    char num2[20];
    while(scanf("%s %s", num1, num2) != EOF){
        int len1 = strlen(num1);
        int len2 = strlen(num2);
        printf("%ld\n", trans(len1, num1) + trans(len2, num2));
    }
    return 0;
}

```