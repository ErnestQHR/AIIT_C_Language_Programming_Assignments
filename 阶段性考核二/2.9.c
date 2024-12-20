//输入一个1~100之内的数（包括1和100），判断是否与7有关（即能被7整除或者十位或个位包含7），如果不在1~100内输出数据错误。
//例如：
//输入一个整数17，则输出“符合”；
//输入一个整数20，则输出“不符合”;
//输入一个整数101，则输出“数据错误”。
// Created by 仇皓然 on 24-11-25.
//
#include <stdio.h>
void fun(int m) {
    if (m < 1 || m > 100) {
        printf("数据错误"); // 如果数字不在1~100之间
    } else if (m % 7 == 0 || m / 10 == 7 || m % 10 == 7) {
        // 判断是否能被7整除或者十位或个位包含7
        printf("符合");
    } else {
        printf("不符合");
    }
}

int main()
{
	fun(17);
	fun(20);
	fun(101);
	return 0;
}