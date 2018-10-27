/*
所谓完数就是该数恰好等于除自身外的因子之和。
例如：6=1+2+3，其中1、2、3为6的因子。
本题要求编写程序，找出任意两正整数m和n之间的所有完数。

输入格式：
输入在一行中给出2个正整数m和n（1<m≤n≤10000），中间以空格分隔。

输出格式：
逐行输出给定范围内每个完数的因子累加形式的分解式，
每个完数占一行，格式为“完数 = 因子1 + 因子2 + ... + 因子k”，
其中完数和因子均按递增顺序给出。若区间内没有完数，则输出“None”。

输入样例：
2 30
输出样例：
6 = 1 + 2 + 3
28 = 1 + 2 + 4 + 7 + 14
*/
#include<stdio.h>
int isWanshu(int n);
void showWanshu(int n);
int main() {
	int m,n;
	scanf("%d",&m);
	scanf("%d",&n);
	int count = 0;
	for(int i=m; i<=n; i++) {
		if(isWanshu(i)==1) {
			count++;
			showWanshu(i);
		}
	}
	if(count==0) {
		printf("None");
	}

	return 0;
}
int isWanshu(int N) {
	int sum = 0;
	for(int i=1; i<N; i++) {
		if(0==N%i) {
			sum+=i;
		}
	}
	if(sum==N) {
		return 1;
	} else {
		return 0;
	}
}
void showWanshu(int n) {
	printf("%d = 1",n);
	for(int i=2; i<n; i++) {
		if(n%i==0) {
			printf(" + %d",i);
		}
	}
	printf("\n");
}

