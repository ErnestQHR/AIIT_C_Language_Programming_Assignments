//翻转（即字符串转变为“!dlroWolleH”）
//函数的具体要求如下：
//输入：字符型数组，数组内存实际长度
//处理：将数组中字符串翻转
//输出：无返回
// Created by 仇皓然 on 24-11-25.
//
#include <stdio.h>
#include <string.h>

char s[20] = "I have a apple";  // 原始数组
char s_new[20];   // 用于存储翻转后的新数组
char array[20] = "elppa a evah I" ; // 用于验证答案的数组

//请在该注释语句下方完成fun函数的定义
void fun(char arr[], int len) {
    for (int i = 0; i < len; i++) {
        s_new[i] = arr[len - 1 - i]; // 将 arr 的字符从尾到头依次赋值给 s_new
    }
    s_new[len] = '\0'; // 添加字符串的结束符
}

int main()
{

	int len = strlen(s);
	fun(s, len);
/*
将修改后的数组s_new与答案数组array作比较，
如果一致，则返回0，表示原数组s中所有字符已翻转
*/
	int num = strcmp(s_new, array);
	if (num == 0) {
		printf("数组翻转成功");
	}
	else {
		printf("数组翻转失败");
	}
	return 0;
}
/*我们想把字符串 arr 里的字符 从尾到头 翻转并存储到 s_new 中。例如：
	•	原字符串 arr: "I have a apple"
	•	翻转后的字符串 s_new: "elppa a evah I"

这行代码的作用是实现这个翻转。
原理：索引从尾到头

	•	arr[len - 1 - i]：
	•	len - 1 是数组 arr 的最后一个字符的索引。
	•	i 是从 0 到 len - 1 的循环变量。
	•	len - 1 - i 表示从最后一个字符逐步向前移动的索引。

写入 s_new

	•	s_new[i] = arr[len - 1 - i]：
	•	把 arr 的最后一个字符放到 s_new 的第一个位置；
	•	把 arr 的倒数第二个字符放到 s_new 的第二个位置；
	•	依次类推，直到 arr 的第一个字符被放到 s_new 的最后一个位置。
 */