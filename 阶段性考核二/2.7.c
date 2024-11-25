//函数的具体要求如下：
//输入：字符型数组，数组内存实际长度
//处理：将数组中的大写字母转成小写字母
//输出：无返回
// Created by 仇皓然 on 24-11-25.
//和上面那题类似，都是这样的


#include <stdio.h>
#include <string.h>
//请在该注释语句下方完成fun函数的定义
void fun(char arr[], int len) {
    for (int i = 0; i < len; i++) {
        if (arr[i] >= 'A' && arr[i] <= 'Z') { // 判断是否是大写字母
            arr[i] = arr[i] + ('a' - 'A'); // 转换为小写字母
        }
    }
}



int main()
{
	char s[20] = "DFGHjkl";
	char array[20] = "dfghjkl";
	int len = strlen(s);
	fun(s, len);
/*
将修改后的数组s与原数组array作比较，
如果一致，则返回0，表示数组s中所有的大写字母已转为小写
*/
	int num = strcmp(s, array);
	if (num == 0) {
		printf("数组转化成功");
	}
	else {
		printf("数组转化失败");
	}
	return 0;
}