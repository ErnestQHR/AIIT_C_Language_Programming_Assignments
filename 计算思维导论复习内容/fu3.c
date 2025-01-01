//.定义一个fun函数，函数的作用是统计返回数组中大于等于6.0的数字个数。
// Created by 仇皓然 on 24-12-30.
//
#include <stdio.h>

int fun(float a[],int n){
    int count=0;
    for(int i=0;i<n;i++){
      if(a[i]>6.0)count++;
    }
    return count;
}
int main(){
    int n;
    scanf("%d",&n);
    float a[n];

    for(int i=0;i<n;i++){
      scanf("%f",&a[i]);
    }

    printf("%d",fun(a,n));
    return 0;
}