//4.从键盘输入一个数num，判断num奇偶数，如果是奇数，返回1；如果是偶数，返回0。
#include <stdio.h>

int judge(int num) {
    if(num%2==0)return 0;
    if(num%2!=0)return 1;
}

int main() {
    int num;
    scanf("%d",&num);
    printf("%d",judge(num));
    return 0;

}