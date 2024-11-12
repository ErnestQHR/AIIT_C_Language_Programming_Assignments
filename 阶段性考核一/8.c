//请完善右边的fun函数，函数的具体要求如下：
//输入：任意一个字母
//处理：如果是大写字母返回1；如果是小写字母返回0.
//输出：返回判断结果
//
//注意：请勿修改任何已有代码！
//提示：A的ASCII码是65，a 的ASCII码是97
// Created by 仇皓然 on 24-11-12.
//
#include <stdio.h>

//请在此处注释语句下方完成fun函数的声明与实现
//第一种方法直接使用字符简单易懂，注意返回值是0和1所以使用int类型
/*int fun(char a) {
	if ('a' <= a && a <= 'z') {
		return 0;  // 返回 0 表示小写字母
	}
	if ('A' <= a && a <= 'Z') {
		return 1;  // 返回 1 表示大写字母
	}
	return -1;  // 如果输入不是字母，返回 -1（可选，增强鲁棒性）
}
*/
// 第二种方法使用ASCII码
int fun(char a) {
	if (a >= 65 && a <= 90) {
		return 1;  // 返回 1 表示大写字母
	}
	if (a >= 97 && a <= 122) {
		return 0;  // 返回 0 表示小写字母
	}
	return -1;  // 如果输入不是字母，返回 -1（可选，增强鲁棒性）
}

int main()

{
	char letter2 = 'b';
	char letter = 'A';
	int result = fun(letter);
	int result2 = fun(letter2);
	printf("%d\n",result);
	printf("%d\n",result2);
	return 0;
}