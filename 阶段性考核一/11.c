//请在右边完善fun函数，函数的具体要求如下：
//输入：一个浮点型数字
//处理：输出该数绝对值，保留小数点后三位有效数位
//输出：返回绝对值
//注意：请勿修改任何已有代码！
// Created by 仇皓然 on 24-11-12.
#include <stdio.h>
/*
请在此处注释语句下方完成fun函数的声明与实现，
*/
float fun(float a){
return a < 0 ? -a : a;
}

int main()
{
	float a = -30;
    float b = fun(a);
	printf("绝对值是%.3f",b);//%.3f的意思为保留小数点后三位
	return 0;
}