#include <stdio.h>
int main()
{
    int a, b;
    int i, flag = 0;
    scanf("%d %d", &a, &b);
    while (a != b)
    {
        flag = 0;
        for (i = 2; i < a; ++i)
        {

            if (a % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d", a);
        ++a;
    }
}
// int main()
// {
//     int a;
//     int b;
//     int c = 1;
//     printf("输入基数：");
//     scanf("%d", &a);
//     printf("输入次方数：");
//     scanf("%d", &b);
//     while (b != 0)
//     {
//         c = c * a;
//         b--; /* code */
//     }
//     printf("%d", c);
// }
// int main()
// {
//     int n;
//     int count = 0;
//     scanf("%d", &n);
//     while (n != 0)
//     {
//         n = n / 10;
//         ++count;
//     }
//     printf("%d", count);
// }
// int main()
// {
//     int i, n, sum = 0;
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++)
//     {
//         sum = sum + i;
//     }
//     printf("%d", sum);
// }
