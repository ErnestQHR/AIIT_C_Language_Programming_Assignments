//请完善右边的fun函数，函数的具体要求如下：
//形参：年份
//处理：判断该年是平年或闰年，如果是平年，返回0；如果是闰年，返回1
//输出：返回判断结果
//
//提示1：函数建议声明为如下格式 int fun(int year);
//提示2：平年和闰年的区分方法：
//①普通年能被4整除的为闰年（如2004年就是闰年,1901年不是闰年）
//②世纪年能被400整除的是闰年(如2000年是闰年,1900年不是闰年)
//注意：请勿修改任何已有代码！
// Created by 仇皓然 on 24-11-12.
//
#include <stdio.h>
//请在此处注释语句下方完成fun函数的声明与实现
int fun(int year) {
    // 判断闰年的条件
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // 是闰年
    }
    return 0; // 是平年
}

int main()
{
	int year1 = 2020;
	int flag = fun(year1);
	printf("%d\n",flag);
	int year2 = 1900;
	flag = fun(year2);
	printf("%d",flag);
	return 0;
}