//
// Created by 仇皓然 on 24-10-30.
#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, area;

    // 输入半径
    printf("请输入半圆的半径: ");
    scanf("%f", &radius);

    // 计算半圆面积
    area = 0.5 * PI * radius * radius;

    // 输出结果
    printf("半圆的面积是: %.2f\n", area);

    return 0;
}
