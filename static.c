#include <stdio.h>
void test()
{
    static b = 0; //静态变量，程序只赋值一次
    b++;
    int c = 0;
    c++;
    printf("b=%d ,c=%d\n", b, c);
}
int main()
{
    int i;

    for (i = 0; i < 3; i++)
    {
        test();
    }
}
