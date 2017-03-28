/*******************************************************************
 *线性时间选择问题
 *
 *给定线性序列集中n个元素和一个整数k,1<=k<=n,要求找出这n个元素中第k
 *小的元素(给定的线性集是无序的)。
 *
 *线性事件选择随机划分法可以模仿随机化快排，基本思想是对输入数组进行
 *递归划分,与快速排序不同的是它只对划分出的子数组之一进行递归处理
 * *****************************************************************/
#include <stdio.h>

#define MAX 10
void swap(int *p1, int *p2){
	int tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int partation(int a[], int lo, int hi){
	int i, j, tmp;
	if(lo < hi){
		tmp = a[hi];
		i = lo - 1;
		for(j=lo; j<hi; j++){
			if(a[j] < tmp){
				swap(&a[i + 1], &a[j]);
				i++;
			}
		}
		swap(&a[hi], &a[i + 1]);
	}
	return i + 1;//左边永远小于a[hi],右边永远大于a[hi],i永远指向左边对后一位，j一直向前移动，最后指向a[hi - 1]
}

int Rndpartation(int a[], int lo, int hi){
	int rnd;
	if(lo < hi){
		rnd = rand()%(hi - lo + 1) + lo;
		swap(&a[hi], &a[rnd]);
	}
	return partation(a, lo, hi);
}


//k为第k小的数,数组a为一串数,lo代表low,hi代表high。
int RndSelection(int a[], int lo, int hi, int k){
	int n, p;
	if(lo == hi)
		return a[lo];
	else{
		p = Rndpartation(a, lo, hi);//随机找中间数p
		n = p - lo + 1;//n为数p对应的从0开始的数
		if(k == n)
			return a[p];
		else if(k < n)
			return RndSelection(a, lo, p - 1, k);
		else if(k > n)
			return RndSelection(a, p + 1, hi, k - n);
	}
}

int main(){
	int num = 0, i, count;
	int a[MAX] = {6, 2, 1, 4, 6, 8, 12, 11, 45, 22};
#if 1
	printf("是个数字是:\n");
	for(i=0; i<MAX; i++)
		printf("%d ", a[i]);
	printf("\n");
#endif
	printf("你想找到第几小的数？\n");
	while(1){
		scanf("%d", &count);
		if(count < MAX + 1)
			break;
		else
			printf("输入错误,超过10个数了！\n");
	}
	num = RndSelection(a, 0, MAX - 1, count);
	printf("数字%d是第%d个数。\n", num, count);
	return 0;
}
