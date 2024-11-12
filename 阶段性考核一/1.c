
// Created by 仇皓然 on 24-11-12.
//在右边完善GetZhouChang函数，函数的具体要求如下：
//输入：圆的半径r
//处理：计算这个圆的周长,并返回结果
//输出：圆的周长
//输出样式：
//注意：请勿修改任何已有代码！默认圆周率为请3.14！

#include <stdio.h>
/*
请在此处注释语句下方完成GetZhouChang函数的声明与实现
*/
float GetZhouChang(float r){
  float d = 2 * 3.14 * r;//d为周长为2*3.14*r
    return d;
}

int main() {
float r = 4.4;
float zhouchang = GetZhouChang(r);
printf("%0.2f",zhouchang);
	return 0;
}