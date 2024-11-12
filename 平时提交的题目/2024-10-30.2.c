
// Created by 仇皓然 on 24-10-30.
#include <stdio.h>q
int main() {
    char name[50];
    int age;
    float score;

    // 格式化输入
    printf("请输入您的姓名: ");
    scanf("%s", name);

    printf("请输入您的年龄: ");
    scanf("%d", &age);

    printf("请输入您的分数: ");
    scanf("%f", &score);

    // 格式化输出
    printf("\n--- 输出信息 ---\n");
    printf("姓名: %s\n", name);
    printf("年龄: %d\n", age);
    printf("分数: %.2f\n", score);

    return 0;
}
