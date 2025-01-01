// Created by 仇皓然 on 24-12-30.
//2.定义一个fun函数，函数的作用是返回数组中的最小值。函数的具体要求如下：
//输入：浮点型数组，数组长度，处理：找出数组中的最小值、最大者。
#include <stdio.h>

void fun(float a[],int N,float *min,float *max){
     *min=*max=a[0];
     for(int i=0;i<N;i++){
     if(a[i]<*min){
     *min=a[i];
     }
     if(a[i]>*max){
     *max=a[i];
     }
   }
}

int main(){
    int n;
    printf("请输入数组的长度：\n");
    scanf("%d",&n);

    float a[n];
    printf("请输入数组的 %d个浮点数\n",n);
    for(int i=0;i<n;i++){
    scanf("%f",&a[i]);
    }
    float min,max;
    fun(a,n,&min,&max);
    printf("最大值为 %f\n",max);
    printf("最小值为 %f\n",min);
return 0;
}
//使用指针可以做到只遍历一次