//请完善fun()函数，函数的具体要求如下：
//输入：两个整型的数据分别为a,b
//处理：计算a2+b2,并返回结果
//输出：a2+b2的值
//输出样式：
// Created by 仇皓然 on 24-11-12.
//
#include <stdio.h>
/*
请在此处注释语句下方完成fun()函数的声明与实现
*/
int fun(int a,int b){
  int sum=a*a+b*b;
  return sum;
}

int main()
{
	int a=3,b=4,c;
	c=fun(a,b);
	printf("a平方+b平方和为：%d\n",c);
	return 0;
}