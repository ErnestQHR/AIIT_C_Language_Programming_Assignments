//
// Created by 仇皓然 on 24-12-23.
//最简单的一种方法，利用三者比较来排序

#include<stdio.h>
int main(){
    float a,b,c;//定义三只小猪
    float temp;//中间量
    printf("请输入三只小猪的体重：");
    scanf("%f %f %f",&a,&b,&c);//读入三只小猪的体重

    //使用if语句来进行排序

    if(a > b){
      temp = a;
      a = b;
      b = temp;
    }
    if(a > c){
      temp = a;
      a = c;
      c = temp;
    }
    if(b > c){
      temp = b;
      b = c;
      c = temp;
    }

    printf("排序后的体重为：%.2f %.2f %.2f\n", a, b, c);
    return 0;
}