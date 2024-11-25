//定义一个fun函数，函数的作用是返回数组中的平均值
//函数的具体要求如下：
//输入：浮点型数组，数组长度
//处理：计算出数组平均值
//返回值：平均值
// Created by 仇皓然 on 24-11-25.
//
#include <stdio.h>
//请在该注释语句下方完成fun函数的定义
float fun (float arr[], int len){
     float sum = 0;//定义一个sum表示数组的和
     float average = 0;//定义一个平均数
     for (int i = 0; i < len; i++){//遍历数组
       sum += arr[i];//sum = 数组每个元素相加
	}
	average = sum / len;//平均数就是为sum和来除以数组的元素个数
        return average;
}

int main()
{
	float array[5] = { 1.3,4.5,3.7,2.7,6.8 };
	int length = sizeof(array) / sizeof(array[0]);
	float avg = fun(array, length);
	printf("平均值是：%0.2f", avg);
	return 0;
}