//请完善div函数，函数的具体要求如下：
//形参：两个整型数a,b
//处理：判断a能否整除b，如果可以整除，输出0；如果不能整除，输出它们的余数
//返回：返回处理结果
//提示：函数建议声明为如下格式 int div(int a,int b);
//注意：输出语句结束不用换行！
//请勿修改任何已有代码！
// Created by 仇皓然 on 24-11-12.
#include<stdio.h>
//请在此处注释语句下方完成div函数的声明与实现
int div(int a,int b){
  int res;
  if(a%b==0){
    return 0;
    }
  else{
      res=a%b;
      return res;
  }
  }

int main() {
int a = 100;
int b = 50;
int result = div(a,b);
printf("%d",result);
return 0;
}