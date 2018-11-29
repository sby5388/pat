/*
练习3-5 输出闰年 （15 分）
输出21世纪中截止某个年份以来的所有闰年年份。
注意：闰年的判别条件是该年年份能被4整除但不能被100整除、或者能被400整除。

输入格式:
输入在一行中给出21世纪的某个截止年份。

输出格式:
逐行输出满足条件的所有闰年年份，即每个年份占一行。
输入若非21世纪的年份则输出"Invalid year!"。若不存在任何闰年，则输出“None”。

输入样例1:
2048
输出样例1:
2004
2008
2012
2016
2020
2024
2028
2032
2036
2040
2044
2048
输入样例2:
2000
输出样例2:
Invalid year!
*/
#include<stdio.h>
int main() {
	int N;
	scanf("%d",&N);
	if(N>2100||N<2001) {
		printf("Invalid year!");
	} else {
		int empty = 1;
		int year = 2004;
		while(year<=N) {
			if((year%4==0&& year%100!=0)||year%400==0) {
				printf("%d\n",year);
				empty=0;
			}
			year+=4;
		}
		if(empty) {
			printf("None");
		}
	}


	return 0;
}

