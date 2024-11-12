//请完善判断是否为直角三角形DecideTriangle函数，函数的具体要求如下：
//形参：三个整型A、B、C（如3、4、5）
//处理：判断三角形如果是直角三角形，返回1；不是直角三角形，返回0
//返回：返回判断结果
//
//提示：已知一个三角形，不需要判断是否为三角形，利用勾股定理来判断是否为直角三角形。
//注意：请勿修改任何已有代码！
// Created by 仇皓然 on 24-11-12.
//
#include<stdio.h>
//请在此处注释语句下方完成DecideTriangle函数的声明与实现

int DecideTriangle(int a, int b, int c){
  if(a*a+b*b==c*c)return 1;//勾股定理三种情况
  if(a*a+c*c==b*b)return 1;
  if(b*b+c*c==a*a)return 1;
  else return 0;
  }

int main() {
	int A,B,C;
    A=3;
    B=4;
    C=5;
	int result = DecideTriangle(A,B,C);
	printf("%d", result); // 当前三角形为直角三角形，输出1
	A=3;
    B=5;
    C=5;
	result = DecideTriangle(A,B,C);
	printf("%d", result);  // 当前三角形不为直角三角形，输出0
	return 0;
}