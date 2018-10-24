/*
某城镇进行人口普查，得到了全体居民的生日。现请你写个程序，找出镇上最年长和最年轻的人。

这里确保每个输入的日期都是合法的，但不一定是合理的——
假设已知镇上没有超过 200 岁的老人，而今天是 2014 年 9 月 6 日，
所以超过 200 岁的生日和未出生的生日都是不合理的，应该被过滤掉。

输入格式：
输入在第一行给出正整数 N，取值在(0,10^5]；
随后 N 行，每行给出 1 个人的姓名（由不超过 5 个英文字母组成的字符串）、
以及按 yyyy/mm/dd（即年/月/日）格式给出的生日。题目保证最年长和最年轻的人没有并列。

输出格式：
在一行中顺序输出有效生日的个数、最年长人和最年轻人的姓名，其间以空格分隔。

输入样例：
5
John 2001/05/12
Tom 1814/09/06
Ann 2121/01/30
James 1814/09/05
Steve 1967/11/20
输出样例：
3 Tom John
*/
#include<stdio.h>
#define MAX 20140906
#define MIN 18140906
struct person {
	char name[10];
	char data[20];
	int yy;
	int mm;
	int dd;
};
int isNormal(int year);
int main() {
	int N;
	scanf("%d",&N);
	int count  = 0;
	int min = 0;
	int max = 0;
	char *maxName;
	char *minName;
	for(int i=0; i<N; i++) {
		int y,m,d;
		char *temp;
		//TODO 针对0进行初始化
		scanf("%s %d/%d/%d",&temp,&y,&m,&d);
		//printf("%s \n",temp);
		int date = y*10000 + m*100 + d;
		if(isNormal(date)) {
			if(count==0) {
				min = max = date;
				minName = temp;
				maxName = temp;
			}
			count++;
			if(date>max) {
				max = date;
				maxName = temp;
			}
			if(date<min) {
				min = date;
				minName = temp;
			}
		}
	}

	printf("%d %s %s",count,maxName,minName);
	return 0;
}


int isNormal(int year) {
	//printf("year = %d \n",year);
	if(year > MAX || year < MIN) {
		return 0;
	}
	return 1;
}

















