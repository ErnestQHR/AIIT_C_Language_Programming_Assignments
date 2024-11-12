//请在右边完善fun函数，函数的具体要求如下：
//输入：一个整型数字
//处理：用户传入一个整型数字，然后返回这个整型数字的最后一位数字，输出样式如下图
//输出样式：
// Created by 仇皓然 on 24-11-12.
//
#include <stdio.h>
/*
请在此处注释语句下方完成fun函数的声明与实现，
*/
int fun(int x){
  int res = x%10;//想获得最后一位数很简单只要%10就可以了
  return res;
}

int main(){
     int x = 325;
	 int result = fun(x);
	 printf("%d", result);
	 return 0;
}