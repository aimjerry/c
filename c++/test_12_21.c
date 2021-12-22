#include <stdio.h>
int pow (int a,int b)
{
    int c=1 ;
    int i=1;
    for(;i<=b;i++)
    c*=a;
    return c;
}
int convertBinaryToDecimal(long long n)
{
    int i=0;
    int temp;
    int decimalNumber=0;
    while (n!=0)
    {
        temp=n%10;
        n/=10;
        decimalNumber+=temp*pow(2,i);
        i++ ;  /* code */
    }
    return decimalNumber;
}
int main()
{
    long long n;
    printf("输入一个二进制数字：\n");
    scanf("%lld",&n);
    printf("这个二进制数字%lld 的十进制数字为：%d\n",n,convertBinaryToDecimal(n));
    return 0;
}
