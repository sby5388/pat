/*
实验2-1-2 温度转换 （5 分）
本题要求编写程序，计算华氏温度150°F对应的摄氏温度。计算公式：C=5×(F-32)/9，式中：C表示摄氏温度，F表示华氏温度，输出数据要求为整型。

输入格式:
本题目没有输入。

输出格式:
按照下列格式输出

fahr = 150, celsius = 计算所得摄氏温度的整数值
*/
#include<stdio.h>
int main() {
	int fahr = 150;
	int celsius = 5*(fahr)/9 - 5*(32)/9;
	printf("fahr = 150, celsius = %d",celsius);
	return 0;
}

