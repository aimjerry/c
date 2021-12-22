#include <stdio.h>
#include <string.h>
int add(int pa, int pb)
{
    int c;
    c = pa + pb;
    return c;
}
int main()
{
    int a = 10;
    int b = 10;
    int c = 0;
    scanf("%d %d", &a, &b);
    c = add(a, b);
    printf("c=%d", c);
}
// int main()
// {
//     int a = 10;
//     int b = 5;
//     printf("a+b的值：%d\n", a + b);
//     printf("a-b的值：%d\n", a - b);
//     printf("a*b的值:%d\n", a * b);
//     printf("a/b的值：%d\n", a / b);
// }
// int add(int a, int b)
// {
//     int c;
//     c = a + b;
//     return c;
// }

// int main()
// {
//     int i;
//     // a = 1;
//     // b = 2;
//     // scanf("%d %d\n", &a, &b);
//     i = add(2, 2);
//     printf("%d\n", i);
// }
