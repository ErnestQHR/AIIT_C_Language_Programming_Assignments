//使用C语言完善fun函数，函数的具体要求如下：
//形参：一个数组str
//处理：遍历数组str，统计字符串中的英文字母的个数并返回结果。
//返回值：返回结果
//
//例如：
//输入This is a book，则输出11。
// Created by 仇皓然 on 24-11-25.
//
#include <stdio.h>
int fun(char str[])
{
	//请在该注释语句下方编写代码
        int count = 0;  // 初始化字母计数器
    int i = 0;
    
    // 遍历字符串直到遇到字符串结束符 '\0'
    while (str[i] != '\0') {
        // 判断当前字符是否是字母
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            count++;  // 如果是字母，计数器加1
        }
        i++;  // 移动到下一个字符
    }
    
    return count;  // 返回统计结果
}

int main()
{
	char str[20] = "I love you";
	int num = fun(str);
	printf("%d", num);
	return 0;
}