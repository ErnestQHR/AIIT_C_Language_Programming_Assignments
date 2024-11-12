//请完善判断函数sum()，函数的具体要求如下：
//输入：两个整型的数据a、b
//处理：计算a+b,并返回结果
//输出：a+b和的值
//
//提示：函数建议声明为如下格式 int sum(int a,int b);
//注意：请勿修改任何已有代码！
// Created by 仇皓然 on 24-11-12.
//没什么说的
#include<stdio.h>
/*
请在此处注释语句下方完成sum()函数的声明与实现
*/
int sum(int a,int b){
  int sum = a+b;
  return sum;
}

int main()
{
	int a=3,b=4,c;
	c=sum(a,b);
	printf("a+b的和为：%d\n",c);
	return 0;
}