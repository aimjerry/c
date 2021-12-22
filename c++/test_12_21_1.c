#include <stdio.h>
long long  binarynumber(int n)
{
    int temp;
    int i=1;
    long long  binarynumber=0;
    while (n!=0)
    {
     temp=n%2;
     n/=2;
     binarynumber+=temp*i;
     i*=10;
    }
    return binarynumber;
}
int main()
{
    int n;
    printf("输入一个十进制数字：\n");
    scanf("%d",&n);
    printf("十进制数字 %d对应的二进制数字为：%lld\n",n,binarynumber(n));
}
