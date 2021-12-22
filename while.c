#include <string.h>
#include <stdio.h>
// int main()
// {
//     int i = 0;
//     int sum = 0;
//     for (; i <= 100; i++)
//     {
//         sum += i;
//     }
//     printf("sum=%d", sum);
// }
// int main()
// {
//     int i = 1;
//     int sum = 0;
//     while (i <= 100)
//     {
//         i++;
//         sum += i;
//     }
//     printf("sum=%d\n i=%d", sum, i);
// }
// int main()
// {
//     int a = 0;
//     int sum = 0;
//     while (sum <= 5000)
//     {
//         printf("输入数字：\n");
//         scanf("%d", &a);
//         sum += b;
//     }
// }
int main()
{
    int a = 0;
    int sum = 0;
    while (sum < 5000)
    {
        printf("输入一个数字：\n");
        scanf("%d", &a);
        sum += a;
    }
}
