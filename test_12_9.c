#include <stdio.h>
#include <string.h>
#include <assert.h>
void check(unsigned int a)

{
    if (a % 2 == 0)
        printf("这个数字是偶数\n");
    el prse
        prinft("这个数字是奇数\n");
}
int main()
{
    unsigned int a = 0;
    printf("输入一个数字：\n");
    check(a);
}
c
        s /
    anf("%d ", &a);
// void exchange(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
//     printf("交换后 a= %d\n b=%d\n", a, b);
// }
// int main()
// {
//     int a = 5;
//     int b = 6;
//     printf("交换前 a=%d\n b=%d\n", a, b);
//     exchange(a, b);
// }

// int main()
// {

//     printf("字节大小为：%d\n", sizeof(int));
//     printf("字节大小为：%d\n", sizeof(double));
//     printf("字节大小为：%d\n", sizeof(char));
//     printf("字节大小为：%d\n", sizeof(short));
//     printf("字节大小为：%d\n", sizeof(long));
//     printf("字节大小为：%d\n", sizeof(long long));
//     printf("字节大小为：%d\n", sizeof(long double));

//     return 0;
// }

// #define MAX 300

// void swap(int a, int b, int c)
// {
//     int temp = 0;
//     temp = a;
//     if (temp > b && temp > c)
//         printf("最大数：%d\n", temp);
//     else if (temp < b && temp > c)
//     {
//         temp = b;
//         printf("a<b结果为：%d\n", temp);
//     }
//     else if (temp < b && temp < c)
//     {
//         temp = c;
//         printf("a<b结果为：%d\n", temp);
//     }

//     else
//         printf("他们一样大\n");
// }
// int main()
// {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     printf("输入3个数字：\n");
//     scanf("%d %d %d", &a, &b, &c);
//     swap(a, b, c);
//     // int a = 0;
//     // int b = 0;
//     // printf("输入两个数字：\n");
//     // scanf("%d %d ", &a, &b);
//     // printf("他们的结果是：%d\n", a / b);
//     // printf("他们的余数是：%d\n", a % b);
//     // char a[MAX] = {0};
//     // int i = 0;
//     // printf("输入小于%d的数字:\n", MAX);
//     // scanf("%s", a);
//     // printf("%d\n", strlen(a));
//     // for (i = 0; i < strlen(a); i++)
//     // {
//     //     printf("%c 的ASCII码是：%d\n", a[i], a[i]);
//     // }

//     // char a = 0;
//     // printf("输入一个字母：\n");
//     // scanf("%c", &a);
//     // printf("%c的ASCII码是 %d", a, a);
//     // float a = 0;
//     // float b = 0;
//     // printf("输入两个数字：\n");
//     // scanf("%f %f", &a, &b);
//     // printf("结果是：%.2f", a * b);
//     // int a = 0;
//     // int b = 0;
//     // int sum = 0;

//     // printf("输入两个数字：\n");
//     // scanf("%d %d", &a, &b);
//     // sum = a + b;
//     // printf("结果为：%d", sum);

//     // double a = 0;
//     // printf("输入一个数字：\n");
//     // scanf("%lf", &a);
//     // printf("您输入的数字是：%lf", a);
//     // float a = 0;
//     // printf("输入一个浮点数：\n");
//     // scanf("%f", &a);
//     // printf("您输入的浮点数字为：%.2f", a);
//     // // char a = 0;
//     // printf("输入一个字母：\n");
//     // scanf("%c", &a);
//     // printf("您输入的字母是：%c", a);

//     // int a = 1;
//     // printf("输入一个整数：\n");
//     // scanf("%d", &a);
//     // printf("您输入的数字是：%d", a);
// }
// // int main()
// {
//     printf("helloworld");
//     return 0;
// }
