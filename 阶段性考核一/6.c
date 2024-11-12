//请完善判断最大数的GetMax函数，函数的具体要求如下：
//输入：三个整型数a,b,c
//处理：通过条件语句判断最大的数，并返回最大的数
//输出：返回判断结果
//提示：函数建议声明为如下格式 int GetMax(int a,int b,int c)
//注意：请勿修改任何已有代码！
// Created by 仇皓然 on 24-11-12.
//
#include <stdio.h>

//请在此处注释语句下方完成GetMax函数的声明与实现
int GetMax(int a,int b,int c){
  int max=a>b?a:b;//三目运算符a大于b吗？是max=a，不是max=b
  max=max>c?max:c;//三目运算符max大于c吗？是max=c
  return max;
}


int main() {
	int a = 20, b = 5, c = 10;
	int max = GetMax(a, b, c);
	printf("三个数最大的是%d", max);
	return 0;
}