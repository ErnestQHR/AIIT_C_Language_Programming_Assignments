//1.从键盘输入5个整数存储到一维数组a[ ]中，将它们逆序重新存放。
//编程实现，并输出数组a[ ]元素的原序、逆序。要求程序运行过程中，能有必要的提示信息。
// Created by 仇皓然 on 24-12-19.
//
#include <stdio.h>

int main()
{
    int a[5]; // 定义数组
    int i, temp;

    printf("请输入5个整数，用空格分隔：\n");

    // 输入数组元素
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    // 输出原序
    printf("数组原序：\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // 逆序存放
    for (i = 0; i < 5 / 2; i++) {
        temp = a[i];
        a[i] = a[4 - i];
        a[4 - i] = temp;
    }

    // 输出逆序
    printf("数组逆序：\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}