//请完善fun函数，函数的具体要求如下：
//输入你和你朋友的年龄，返回两者的年龄差，注意务必年龄大者减去年龄小者。
//例如运行结果
//提示：函数建议声明为如下格式
//int fun(int yourage, int myage);
//注意：请勿修改任何已有代码！
#include <stdio.h>
//请在此处注释语句下方完成fun函数的声明与实现
int fun(int yourage,int myage){
  int res = myage - yourage;
  if(res<0){
    res=res*-1;//如果是年龄小减年龄大直接*-1
}
return res;
}

int main(){
    int yourage=23, myage=19;
	int result = fun(yourage, myage);
    printf("两者相差%d岁",result);
return 0;
}