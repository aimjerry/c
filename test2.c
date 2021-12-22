#include <stdio.h>
typedef struct stu
{
    char name[20];
    int id;
    int age;
    double height;
} stu;
void stu_printf(stu *ps)
{
    printf("%d\n", ps->age);
    printf("%lf", ps->height);
}
int main()
{
    stu s0 = {"张三", 2001, 20, 1.75};
    stu_printf(&s0);
}
// typedef struct stu
// {
//     int age;
//     char name[20];
//     double height;
//     int id;
// } stu;
// void stu_printf(stu temp)
// {
//     printf("%d", temp.age);
// }
// int main()
// {
//     stu s0 = {20, "张三", 1.73, 20001};
//     stu_printf(s0);
// }
// typedef struct stu
// {
//     int age;
//     char name[20];
//     int id;
//     double height;

// } stu;
// typedef struct school
// {
//     char school_name[20];
//     stu s;
//     char *str;
// } school;
// int main()
// {
//     char arr[] = "地球";
//     school a0 = {"北大", {20, "张三", 02221, 1.74}, arr};
//     printf("%s", a0.school_name);
//     printf("%s", a0.str);
//     printf("%d", a0.s.age);
//     printf("%lf", a0.s.height);
//     printf("%d", a0.s.id);
//     printf("%s", a0.s.name);
// }
// typedef struct stu
// {
//     int age;
//     char name[20];
//     double height;
// } stu;

// int main()
// {
//     stu s = {20, "san", 1.7};

//     printf("%s", s.name);
//     printf("%d", s.age);
// }
