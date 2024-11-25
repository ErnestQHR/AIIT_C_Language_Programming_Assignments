//定义一个fun函数，函数的作用是统计并返回数组中字母的个数
//函数的具体要求如下：
//输入：字符型数组
//处理：统计出数组中字母的个数
//返回值：字母个数
// Created by 仇皓然 on 24-11-25.

#include <stdio.h>
//请在该注释语句下方完成fun函数的定义

int fun(char arr[], int len){
     int count=0;
     for(int i=0;i<len;i++){//遍历数组
        if ((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z')) {
            count++; // 如果是字母，计数器加1
        }
    }
    return count; // 返回字母总数
}

int main()
{
	char array[] = {"abcDRT pp"};
	int length = sizeof(array) / sizeof(array[0]);
	int num= fun(array,length);
	printf("字母个数：%d", num);
	return 0;
}