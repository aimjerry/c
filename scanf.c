#include <stdio.h>
#include <string.h>
int main()
{
    int age, weight;
    double hight;
    char body[20];
    char name[20];
    char x = 0;
    memset(name, 0, sizeof(name));
    memset(body, 0, sizeof(body));
    printf("输入你喜欢的明星的名字 ，年龄，身高(米），体重（kg)，性别（x-男；y-女），最喜欢身体部分\n");
    scanf("%s %d %lf %d %c %s", name, &age, &hight, &weight, &x, body);
    printf("姓名：%s\n 年龄：%d\n 身高：%lf\n 体重：%d\n 性别：%c\n 最喜欢的身体部分：%s\n", name, age, hight, weight, x, body);
}

// int main()
// {
//     int a;
//     char ch;
//     do
//     {
//         printf("输入数据：\n");
//         rewind(stdin);
//         scanf("%d", &a);
//         printf("%d\n", a);
//         printf("(y/n)?:"); /* code */
//         rewind(stdin);
//         scanf("%c\n", &ch);

//     } while (ch == 'y' || ch == 'Y');
//     printf("main end;");
// }
