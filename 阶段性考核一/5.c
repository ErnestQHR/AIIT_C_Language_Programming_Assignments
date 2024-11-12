//请在右边完善Calculation函数，函数的具体要求如下：
//输入：两个整型的数据
//处理：计算这两个数组成的矩形的周长,并返回结果
//输出：矩形周长
//输出样式：
//注意：请勿修改任何已有代码！
// Created by 仇皓然 on 24-11-12.
#include <stdio.h>
/*
请在此处注释语句下方完成Calculation函数的声明与实现
*/
int Calculation(int a, int b){
  return (a+b)*2;
}


int main() {
	int a = 10, b = 20;
	int circ = Calculation(a,b);
	printf("周长为%d",circ);
	return 0;
}
