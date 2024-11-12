//请在右边完善fun函数，函数的具体要求如下：
//输入：一个大写字母
//处理：将该大写字母转换成小写字母，并返回结果
//输出：小写字母
//
//注意：请勿修改任何已有代码！
//提示：A的ASCII码是65，a 的ASCII码是97
// Created by 仇皓然 on 24-11-12.
//没什么多说的和10题一样，这个是加32从大写变成小写
#include <stdio.h>
/*
请在此处注释语句下方完成fun函数的声明与实现
*/
char fun(char letter) {
    if (letter >= 'A' && letter <= 'Z') {
        return letter + 32; // 转换为小写字母加32
    }
    return letter; // 如果不是大写字母，直接返回原字符
}


int main()
{
     char letter = 'G';
	 char r = fun(letter);
printf("%c", r);
     return 0;
}
