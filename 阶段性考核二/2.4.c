//定义一个fun函数，函数的作用是统计返回数组中大于等于6.0的数字个数
//函数的具体要求如下：
//输入：浮点型数组、数组长度
//处理：统计出数组中大于等于6.0的数字个数
//返回值：大于等于6.0的数字个数
// Created by 仇皓然 on 24-11-25.
//
#include <stdio.h>
//请在该注释语句下方完成fun函数的定义
int fun(float arr[], int len){
  float count = 0;//count为计数器
  for(int i = 0; i < len; i++){//遍历数组
    if(arr[i] >=6.0){//如果数组中有元素大于6.0
      count++;//直接让计数器加1
    }
  }
	return count;//最后返回结果
}

int main()
{
	float array[5] = {4.8,9.1,2.6,6,5.5};
	int length = sizeof(array) / sizeof(array[0]);
	int num= fun(array,length);
	printf("大于6.0的个数为：%d", num);
	return 0;
}