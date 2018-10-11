/*
这里所谓的“光棍”，并不是指单身汪啦~
说的是全部由1组成的数字，比如1、11、111、1111等。
传说任何一个光棍都能被一个不以5结尾的奇数整除。
比如，111111就可以被13整除。 现在，你的程序要读入一个整数x，
这个整数一定是奇数并且不以5结尾。然后，经过计算，输出两个数字：
第一个数字s，表示x乘以s是一个光棍，第二个数字n是这个光棍的位数。
这样的解当然不是唯一的,题目要求你输出最小的解。
提示：一个显然的办法是逐渐增加光棍的位数，直到可以整除x为止。
但难点在于，s可能是个非常大的数 —— 比如，程序输入31，
那么就输出3584229390681和15，
因为31乘以3584229390681的结果是111111111111111，一共15个1。

输入格式：
输入在一行中给出一个不以5结尾的正奇数x（<1000）。

输出格式：
在一行中输出相应的最小的s和n，其间以1个空格分隔。

输入样例：
31
输出样例：
3584229390681 15
*/




















#include<stdio.h>

void start(int n);
int main() {
	int x;
	scanf("%d",&x);
	start(x);
	return 0;
}
void start(int n) {
	//应当使用一个超长的int[]来存储这些中间数据
	unsigned long long s = 1;
	while(s%n!=0) {
		s = s*10+1;
	}
	unsigned long long s2 =s;
	int count = 0;
	while(s2>0) {
		count++;
		s2=s2/10;
	}
	printf("%lld %d",s/n,count);
}











