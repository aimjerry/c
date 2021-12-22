#include <stdio.h>

typedef struct body
{
    int age;
    double weight;
    double height;
} body;
void my_check(body *ps)
{
    if (ps->age > 20)

        printf("适合\n");
    else
        printf("不合适\n");
}

int main()
{
    body s1 = {0};
    printf("请输入");
    scanf("%d %lf %lf ", &s1.age, &s1.weight, &s1.height);
    my_check(&s1);
    return 0;
}
