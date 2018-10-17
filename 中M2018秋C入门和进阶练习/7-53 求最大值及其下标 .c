/*
本题要求编写程序，找出给定的n个数中的最大值及其对应的最小下标（下标从0开始）。

输入格式:
输入在第一行中给出一个正整数n（1<n≤10）。第二行输入n个整数，用空格分开。

输出格式:
在一行中输出最大值及最大值的最小下标，中间用一个空格分开。

输入样例:
6
2 8 10 1 9 10
输出样例:
10 2
*/
#include<stdio.h>
int main() {
	int N;
	scanf("%d",&N);
	int temp;
	int max,id;
	int isFirst =1;
	for(int i=0; i<N; i++) {
		scanf("%d",&temp);

		if(isFirst) {
			max = temp;
			id =i;
			isFirst = 0;
		} else {
			if(temp>max) {
				max= temp;
				id = i;
			}

		}
	}
	printf("%d %d",max,id);
	return 0;
}

