#include <stdio.h>
int menu()
{
    printf("***************\n");
    printf("* 1-add, 2-sub*\n");
    printf("**   3-mul   **\n");
    printf("**   4-div   **\n");
    printf("*** 0- exit ***\n");
    printf("***************\n");
}
int add(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}
int mul(int x, int y)
{
    return x * y;
}
int div(int x, int y)
{
    return x / y;
}
int main()
{
    int a = 0;
    int b = 0;
    int n = 0;
    int (*p[5])(int, int) = {NULL, add, sub, mul, div};
    menu();
    printf("选择运算类型：\n");
    scanf("%d", &n);
    do
    {
        if (n > 1 && n < 5)
        {
            printf("输入2个数字：\n");
            scanf("%d %d", &a, &b);
            printf("%d", (p[n])(a, b));
        }
        else if (n == 0)
        {
            printf("退出程序；");
            break;
        }
        else
            printf("输入错误；\n");
    } while (n);
    return 0;
    /*switch (n)
    {
    case 1:
        printf("输入2个数字：\n");
        scanf("%d %d", &a, &b);
        printf("%d\n", add(a, b));

        break;
    case 2:
        printf("输入2个数字：\n");
        scanf("%d %d", &a, &b);
        printf("%d\n", sub(a, b));
        break;
    case 3:
        printf("输入2个数字：\n");
        scanf("%d %d", &a, &b);
        printf("%d\n", mul(a, b));
        break;
    case 4:
        printf("输入2个数字：\n");
        scanf("%d %d", &a, &b);
        printf("%d\n", div(a, b));
        break;

    default:
        break;
    }*/
}
// void my_prinft(char *p)
// {
//     printf("%s", p);
// }
// int main()
// {
//     void (*p)(char *) = my_prinft;
//     p("helloworld");
//     return 0;
// }
// int add(int x, int y)
// {
//     int sum;
//     sum = x + y;
//     return sum;
// }
// int main()
// {
//     int (*p)(int x, int y) = &add;
//     printf("%d", p(3, 2));
// }
// void my_printf(int (*p)[], int line, int corl)
// {
//     int i = 0;
//     int j = 0;
//     for (i = 0; i < line; i++)
//     {
//         for (j = 0; j < corl; j++)
//             printf("%d", *(p[i] + j));
//     }
// }
// int main()
// {
//     int a[4][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//     my_printf(a, 5, 5);
// }
// void my_printf(int *p, sz)
// {
//     int i;
//     for (i = 0; i < sz; i++)
//         printf("%d", *(p + i));
// }
// int main()
// {
//     int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int sz;
//     sz = sizeof(a) / sizeof(a[0]);
//     my_printf(a, sz);
// }
