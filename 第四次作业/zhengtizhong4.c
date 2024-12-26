//快速排序
// Created by 仇皓然 on 24-12-23.
//
#include <stdio.h>

void quickSort(float arr[], int low, int high) {
    if (low < high) {
        int i = low, j = high;
        float pivot = arr[low];
        while (i < j) {
            while (i < j && arr[j] >= pivot) j--;
            if (i < j) arr[i++] = arr[j];
            while (i < j && arr[i] <= pivot) i++;
            if (i < j) arr[j--] = arr[i];
        }
        arr[i] = pivot;
        quickSort(arr, low, i - 1);
        quickSort(arr, i + 1, high);
    }
}

int main() {
    float pigs[3];
    printf("请输入三只小猪的体重：\n");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &pigs[i]);
    }

    quickSort(pigs, 0, 2);

    printf("排序后的体重为：%.2f %.2f %.2f\n", pigs[0], pigs[1], pigs[2]);
    return 0;
}