//打印九九乘法表
// Created by 仇皓然 on 24-12-23.
//
#include <stdio.h>
int main() {
    for (int i = 1; i <= 9; i++) {       // 外层循环控制行数
        for (int j = 1; j <= i; j++) {   // 内层循环控制列数
            printf("%dx%d=%2d",i,j,i*j);
        }
        printf("\n");  // 每打印一行后换行
    }
    return 0;
}