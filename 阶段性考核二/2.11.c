//判别一个整数数组中各元素的值，若大于0 则输出该值，若小于等于0则输出0。
//如：本文中a[4] = { 1,-2,3,4 }，那么程序执行的结果是：
//1034
//提示：
//1）函数建议声明为如下格式 void fun(int a[], int len);其中，len为array1数组的长度。
// 为什么要传递len呢？这是因为数组直接作为函数参数的话，需要分配临时的栈区执行拷贝等操作，
// 所以编译器对代码进行了优化，把数组退化成了指针，也就是说调用函数中无法直接获取形参array1的长度。
// Created by 仇皓然 on 24-11-25.
//
#include <stdio.h>
//请在此处注释语句下方完成fun函数的声明与实现
void fun(int a[], int len) {
	for (int i = 0; i < len; i++) {
		if (a[i] > 0) {
			printf("%d", a[i]);  // 如果大于0，则输出该值
		} else {
			printf("0");  // 如果小于或等于0，则输出0
		}
	}
}


int main() {
	int a[5] = {1,2,-1,4,5}, len;
	len = sizeof(a) / sizeof(a[0]);
	fun(a,len);
	return 0;
}