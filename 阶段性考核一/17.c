//请完善fun()函数，函数的具体要求如下：
//输入：任意输入一个整型数(三位数) num
//处理：将其个、十、百位上的数，按照倒序方式依次输出
//输出：依次输出个位、十位、百位上的数字
//输出样式：（需要换行）
//提示：函数建议声明为如下格式 void fun(int num);
//注意：请勿修改任何已有代码！
// Created by 仇皓然 on 24-11-12.
//之前提到过%10为个位，十位数/10再%10 百位数/100
#include <stdio.h>
/*
请在此处注释语句下方完成fun()函数的声明与实现
*/
void fun(int num){
  int num1=num%10;
  int num2=(num/10)%10;
  int num3=num/100;
  printf("个位数：%d\n",num1);
  printf("十位数：%d\n",num2);
  printf("百位数：%d\n",num3);
}

int main(){
	int a=456;
	fun(a);
	return 0;
 }