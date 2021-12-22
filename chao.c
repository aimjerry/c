#include <string.h>
#include <stdio.h>
int main()
{
    int age = 0;
    double height = 0;
    int sc = 0; //1 为身材火辣 2为身材普通 3为飞机场
    int yz = 0; // 1为漂亮 2为普通
    printf("输入超女年龄，身高（米），身材（输入数字 1-火辣 2-普通 3-飞机场），颜值（输入数字 1-漂亮 2-普通）\n");
    scanf("%d %lf %d %d", &age, &height, &sc, &yz);
    // if (age >= 18 && age <= 25)
    // {
    //     if (sc == 1 && yz == 1)
    //     {
    //         printf("这是贵妃\n");
    //     }
    // }
    if (((age > 18) && (age < 25)) && ((height > 1.65) && (height < 1.78)) && (sc == 1) && (yz == 1))
    {
        printf("这是贵妃，带入后宫\n");
    }
    if (((age > 18) && (age < 30)) && ((height > 1.6) && (height < 1.7)) && (sc == 1 || sc == 2) && (yz = 1))
    {
        printf("这是宫女\n");
    }
    else
    {
        printf("这是普通的女的\n");
    }
}
