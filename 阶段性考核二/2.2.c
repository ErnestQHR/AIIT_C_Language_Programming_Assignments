//定义一个fun函数，函数的作用是返回数组中的最小值
//函数的具体要求如下：
//输入：浮点型数组，数组长度
//处理：找出数组中的最小值
//返回值：最小值
// Created by 仇皓然 on 24-11-25.
//和上一题的写法差不多 这次是小于就更新
#include <stdio.h>
//请在该注释语句下方完成fun函数的定义
float fun(float arr[], int len){
  float min = arr[0];//定义一个最小值为数组的第一个元素方便接下来遍历
  for(int i = 1; i < len; i++){//遍历数组的其他元素
    if(arr[i] < min){
      min = arr[i];//更新最小值
      }
     }
     return min;//最后返回最小值
}

int main()
{
	float array[5] = {1.3,4.5,3.7,2.7,6.8};
	int length = sizeof(array) / sizeof(array[0]);
	float min = fun(array,length);
	printf("最小值是：%0.1f", min);
	return 0;
}