#include <stdio.h>
int fib(int n)
{
    int a = 1;
    int b = 1;
    int c = 1;
    while (n > 2)
    {
        c = a + b;
        b = a;
        a = c;
        n--;
    }

    return c;
}

int main()
{
    int n;
    int ret;
    printf("输入一个数字：\n");
    scanf("%d", &n);
    ret = fib(n);
    printf("结果是：%d", ret);
}
/*
 递归的方式求解且波那契数
int fib(int n)
{
    if (n <= 2)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);//递归的方式求和，但是到了数字很大的时候执行不来
}
int main()
{
    int n = 0;
    int ret;
    printf("输入一个数字：\n", n);
    scanf("%d", &n);
    ret = fib(n);
    printf("斐波那契的结果：%d", ret);
}
*/
