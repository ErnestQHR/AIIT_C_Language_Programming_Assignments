
// Created by 仇皓然 on 24-10-17.
#include <stdio.h>
int main(){
    printf("Hello World\n");
    printf("hello aiit!\n");
    printf("仇皓然 计科2404 3243011414\n");
    printf("i love u,爱你哟！！！\n");//打印文字
    float x,y,a;//定义变量x,y,a
    //使用笛卡尔爱心方程打印爱心
    for(y=1.5f;y>-1;y-=0.1f)
    {
        for(x=-1.5f;x<1.5f;x+=.05f){
            a=x*x+y*y-1;
            putchar(a*a*a-x*x*y*y*y<0.0f?'x':' ');
        }


        putchar('\n'); //换行
    }

    return 0;
}

