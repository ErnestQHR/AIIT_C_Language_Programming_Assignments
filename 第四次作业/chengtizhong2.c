//第二种方法采用三目运算
// Created by 仇皓然 on 24-12-23.
//
#include<stdio.h>
int main(){
    float a,b,c;
    printf("请输入三只小猪的体重：");
    scanf("%f %f %f",&a,&b,&c);

    float min = (a < b ? (a < c ? a : c) : (b < c ? b : c));
    float max = (a > b ? (a > c ? a : c) : (b > c ? b : c));
    float mid = a + b + c - min - max;

    printf("排序后的体重为：%.2f %.2f %.2f\n", min, mid, max);
    return 0;
}
