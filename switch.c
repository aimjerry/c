#include <stdio.h>
int main()
{
    int n = 0;
    printf("输入月份对应的阿拉伯数字：\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("1月 feb\n");
        break;
    case 2:
        printf("2月 feb\n");
        break;
    case 3:
        printf("3月 feb\n");
        break;
    case 4:
        printf("4月 feb\n");
        break;
    case 5:
        printf("5月 feb\n");
        break;

    default:
        printf("输入错误；");
        break;
    }
}
