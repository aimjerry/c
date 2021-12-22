#include <stdio.h>
void test(int *pa, int *pb) //定义指针来接受地址
{
    int x = *pa; //解引用*pa
    *pa = *pb;
    *pb = x;
}
int main()
{
    int a = 10;
    int b = 20;
    printf("%d %d\n", a, b);
    test(&a, &b); //取出a 和b的地址传参
    printf("%d %d", a, b);
}
//通过创建中间变量的方式；
// int main()
// {
//     int a, b, c;
//     printf("请输入：");
//     scanf("%d %d \n", &a, &b);
//     printf("交换前a=%db=%d \n", a, b);
//     c = a;
//     a = b;
//     b = c;
//     printf("交换后 a=%d,b=%d\n", a, b);
// }
// int main()
// {
//     int a, b, c;
//     printf("请输入数字：\n");
//     scanf("%d %d", &a, &b);
//     printf("交换前a=%d,b=%d\n", a, b);

//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("交换后 a=%d b=%d\n", a, b);
// }

// int main()
// {
//     int i, j;
//     i = 5;
//     // j = i++;//先付值，再运算
//     j = ++i; //先运算+1 ，再附值
//     printf("%d ,%d\n", i, j);
// }
