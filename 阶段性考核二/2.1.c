//定义一个fun函数，函数的作用是返回数组中的最大值
//
//函数的具体要求如下：
//输入：浮点型数组，数组长度
//处理：找出数组中的最大值
//返回值：最大值
//
#include <stdio.h>
//请在该注释语句下方完成fun函数的定义
float fun(float arr[], int len){
      float max = arr[0];//初始化最大值为数组的第一个元素
      for(int i = 0; i < len; i++){//遍历数组的其他元素
        if(arr[i] > max){//如果在数组中有一个数大于第一个元素
          max = arr[i];//更新最大值
          }
        }
        return max;//返回最大值
}

int main()
{
	float array[5] = {1.3,4.5,3.7,2.7,6.8};
	int length = sizeof(array) / sizeof(array[0]);
	float max = fun(array,length);
	printf("最大值是：%0.1f", max);
	return 0;
}