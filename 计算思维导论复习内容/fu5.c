//.输入两个整型的数据a、b，实现a,b值的交换；输出：交换后的a,b值
// Created by 仇皓然 on 24-12-30.
//
#include <stdio.h>
int main(){
    int a,b,temp;
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
    return 0;
}
//引入一个中间变量temp来实现交换用指针也可以