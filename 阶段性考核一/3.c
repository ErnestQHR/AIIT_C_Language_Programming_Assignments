//请在右边完善func函数，函数的具体要求如下：
//输入：两个整型的数据a和b
//处理：求a-b的绝对值，并返回结果
//输出：|a-b|
// Created by 仇皓然 on 24-11-12.
//
#include<stdio.h>
/*
请在此处注释语句下方完成func函数的声明与实现，
*/
int func(int a,int b){
  int res = a-b;
  if(res<0)res=-res;//如果最后的res = 负数直接输出相反的数就可以实现绝对值
  return res;
  }

int main() 
{    
     int a = 30,b = 100;
     int result = func(a,b);
     printf("%d", result); 
     return 0;
}