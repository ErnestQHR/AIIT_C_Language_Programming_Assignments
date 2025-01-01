//第二种方法，便于理解直接用两个函数findmin和findmax来遍历更新最大值和最小值
// Created by 仇皓然 on 24-12-30.
//
#include <stdio.h>

float findmin(float a[],int N){
  float min=a[0];
  for(int i=1;i<N;i++){
    if(a[i]<min) {
      min=a[i];
    }
   }
  return min;
}

float findmax(float a[],int N){
  float max=a[0];
  for(int i=1;i<N;i++){
    if(a[i]>max){
      max=a[i];
      }
    }
  return max;
}

int main(){
    int n;
    scanf("%d",&n);
    float a[n];
    for(int i=0;i<n;i++){
      scanf("%f",&a[i]);
    }
    float min=findmin(a,n);
    float max=findmax(a,n);
    printf("min=%.2f\n",min);
    printf("max=%.2f\n",max);
    return 0;
    }