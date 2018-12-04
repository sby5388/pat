/*
实验3-11 计算油费 （15 分）
现在90号汽油6.95元/升、93号汽油7.44元/升、97号汽油7.93元/升。
为吸引顾客，某自动加油站推出了“自助服务”和“协助服务”两个服务等级，分别可得到5%和3%的折扣。

本题要求编写程序，根据输入顾客的加油量a，汽油品种b（90、93或97）
和服务类型c（m - 自助，e - 协助），计算并输出应付款。

输入格式：
输入在一行中给出两个整数和一个字符，分别表示顾客的加油量a，
汽油品种b（90、93或97）和服务类型c（m - 自助，e - 协助）。

输出格式：
在一行中输出应付款额，保留小数点后2位。

输入样例：
40 97 m
输出样例：
301.34
*/
#include<stdio.h>
#define max 3
typedef struct {
	int type;
	double prices;
} Oil ;
int main() {
	Oil oil[]= {{90,6.95},{93,7.44},{97,7.93}};
	int a,b;
	char c;
	scanf("%d %d %c",&a,&b,&c);
	double result = ((c=='m')?0.95:0.97);
	for(int i=0; i<max; i++) {
		if(oil[i].type==b) {
			result*=oil[i].prices*a;
		}
	}
	printf("%.2lf",result);

	return 0;
}

