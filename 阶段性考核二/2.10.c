//写程序，输入一个数m，输出[1,m]之间能被3和7整除的所有自然数的倒数之和，并输出有多少个数。
//返回值：返回所求的结果值
//例如：
//输入一个整数49，则输出2和0.071429；
//输入一个整数150，则输出7和0.123469
// Created by 仇皓然 on 24-11-25.
//
#include <stdio.h>
float fun(int m)
{
	float sum = 0;
int i = 1,count=0;
	//请在该注释语句下方编写代码
for (int i = 1; i <= m; i++) {
        if (i % 3 == 0 && i % 7 == 0) {  // 判断是否能被3和7整除
            sum += 1.0 / i;  // 如果能，累加倒数
            count++;  // 符合条件的个数加1
        }
    }

	printf("%d\n",count);
	return sum;
}
int main()
{
	float sum = fun(100);
	printf("%f\n", sum);
	sum = fun(200);
	printf("%f\n", sum);
	sum = fun(300);
	printf("%f\n", sum);
	return 0;
}