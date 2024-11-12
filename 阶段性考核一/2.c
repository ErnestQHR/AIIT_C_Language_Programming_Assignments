//请完善判断 奇偶数 JudgeOddNumber函数，函数的具体要求如下：
//形参：一个整型数num
//处理：判断num奇偶数，如果是奇数，返回1；如果是偶数，返回0
//返回：返回判断结果
// Created by 仇皓然 on 24-11-12.
//
#include<stdio.h>
//请在此处注释语句下方完成JudgeOddNumber函数的声明与实现
int JudgeOddNumber(int num){
  if(num%2==0){//能被2整除的为偶数返回0
    return 0;
  }
  else{
    return 1;//其他情况为奇数返回1
  }
  }

int main() {
	int num = 103;
	int result = JudgeOddNumber(num);
	printf("%d", result);  // 当前num是奇数，输出1
	num = 8;
	result = JudgeOddNumber(num);
	printf("%d", result);  // 当前num是偶数，输出0
	return 0;
}