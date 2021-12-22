#include <stdio.h>
int jicheng(int a, int b)
{
    int c = 1;
    while (b != 0)
    {
        c = c * a;
        b--;
        /* code */
    }
    return c;
}

void check_armstong(int num)
{
    int yushu;
    int count = 0;
    int n;
    int c;
    int result = 0;
    n = num;
    while (n != 0)
    {
        n /= 10; /* 判断这个数是几位 */
        count++;
    }
    n = num;
    while (n != 0)
    {
        yushu = n % 10;
        c = jicheng(yushu, count); /* 求出阶乘结果 */
        result += c;
        n = n / 10;
    }
    printf("%d\n", result);
    if (result == num)
        printf("这是armstrong\n");
    else
        printf("no\n");
}
int main()
{
    int Num;
    scanf("%d", &Num);
    check_armstong(Num);
}
