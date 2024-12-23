//采用冒泡排序
// Created by 仇皓然 on 24-12-23.
//
#include<stdio.h>
int main(){
    float pigs[3];
    printf("请输入三只小猪的体重");
    for (int i=0;i<3;i++){
      scanf("%f",&pigs[i]);
    }
  //冒泡排序
    for (int i=0;i<2;i++){
      for(int j=0;j<2-i;j++){
        if(pigs[j]>pigs[j+1]){
          float temp=pigs[j];
          pigs[j]=pigs[j+1];
          pigs[j+1]=temp;
    }
   }
  }
  printf("排序后的体重为：%.2f %.2f %.2f\n", pigs[0], pigs[1], pigs[2]);
  return 0;
}
