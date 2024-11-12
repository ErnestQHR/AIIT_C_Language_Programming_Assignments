//请在右边完善GetMianJi函数，函数的具体要求如下：
//输入：圆的半径r
//处理：计算这个圆的面积,并返回结果
//输出：圆的面积
//输出样式：
//注意：请勿修改任何已有代码！默认圆周率为3.14！
// Created by 仇皓然 on 24-11-12.
//算圆的面积 s = pi * r * r

#include <stdio.h>
/*
请在此处注释语句下方完成GetMianJi函数的声明与实现
*/
float GetMianJi(float r){
  return r * r*3.14;
  }
  int main(){



float r = 5.4;
float mianji = GetMianJi(r);
printf("%0.2f",mianji);
	return 0;
}
