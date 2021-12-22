#include <stdio.h>
int checkprim(int a)
{
    int i, isprime = 1;
    for (i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            isprime = 0;
            break;
        }
    }
    return isprime;
}
int main()
{
    int a;
    int i;
    int flag = 0;
    printf("输入一个数字：\n");
    scanf("%d", &a);
    for (i = 2; i < a / 2; i++)
    {
        if (checkprim(i) == 1)
        {
            if (checkprim(a - i) == 1)
                printf("%d=%d+%d\n", a, i, a - i);
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("%d 这不能分解", a);
    }

    return 0;
}
