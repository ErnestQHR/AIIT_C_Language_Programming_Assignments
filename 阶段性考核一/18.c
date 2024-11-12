//请完善判断函数fun()，函数的具体要求如下：
//输入：两个整型的数据a、b
//处理：实现a,b值的交换
//输出：交换后的a,b值
//
//提示：函数建议声明为如下格式 void fun(int a,int b);
// Created by 仇皓然 on 24-11-12.
//用第三个temp来实现交换
#include<stdio.h>
/*
请在此处注释语句下方完成fun()函数的声明与实现
*/

void fun(int a,int b){
  int temp = b;
  b = a;
  a = temp;
  printf("a=%d b=%d\n",a,b);
}
int main()
{
	fun(3,2);
	return 0;
}