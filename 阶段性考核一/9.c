/*完善判断最小数的GetMin函数，函数的具体要求如下：
输入：三个整型数a,b,c
处理：通过定义的GetMin函数判断最小的数，并返回最小的数
输出：返回判断结果
注意：请勿修改任何已有代码！输出语句结束不用换行！
 */
// Created by 仇皓然 on 24-11-12.
//这题和之前判断三个数最大的一样没什么好说的
#include <stdio.h>

//请在此处注释语句下方完成GetMin函数的声明与实现
int GetMin(int a, int b, int c) {
    if (a <= b && a <= c) {
        return a;  // a 是最小的数
    } else if (b <= a && b <= c) {
        return b;  // b 是最小的数
    } else {
        return c;  // c 是最小的数
    }
}
int main() {
	int a = 18, b = 8, c = 28;
	int min = GetMin(a, b, c);
	printf("三个数最小的是%d", min);
	return 0;
}
