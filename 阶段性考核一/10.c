//请在右边完善UpperLetter函数，函数的具体要求如下：
//输入：一个小写字母
//处理：将小写字母转换成大写字母,返回结果
//输出样式：大写字母
// Created by 仇皓然 on 24-11-12.
//可以使用ASCII码也可以直接用字符表示把大写字符转为小写只要-32
#include <stdio.h>
/*
请在此处注释语句下方完成UpperLetter函数的声明与实现，
*/
char UpperLetter(char letter) {
    // 判断输入是否是小写字母
    if (letter >= 'a' && letter <= 'z') {
        return letter - 32; // 转换为大写字母，A的ASCII码是65，a 的ASCII码是97差为32,
    return letter; // 如果不是小写字母，直接返回原字符
}
}

int main()
{
	char letter = 'g';
	char r = UpperLetter(letter);
    printf("%c", r);
	return 0;
}