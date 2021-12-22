#include <stdio.h>
#include <string.h>
// int main()
// {
//     char a[] = {"hello"};
//     char *p;
//     p = a;
//     printf(p);

//     // printf("%d \n%d", *a, *p);
//     // printf("%p\n%p", a, p);

//     // printf("%d\n", *p);
//     // printf("%d\n", p[2]);
//     // printf("%p\n", p + 1);
//     // printf("%d\n", *(p + 1));
//     // printf("%d\n", a[1]);
//     // printf("%d\n", *(a + 1));
// }
void fun1(int *max, int *count, int *arr, int sz)
{
    int i;
    int temp = *arr;

    for (i = 1; i < sz; i++)
    {
        if (*(arr + i) > temp)
        {
            temp = *(arr + i);
            *count = 1;
        }
        else if (*(arr + i) == temp)
            (*count)++;
    }
    *max = temp;
}
int main()
{
    int a[] = {2, 3, 4, 5, 6, 6};
    int Max;
    int Count;
    printf("%d\n", sizeof(a) / sizeof(a[0]));
    fun1(&Max, &Count, a, sizeof(a) / sizeof(a[0]));
    printf("%d\n", Max);
    printf("%d\n", Count);
    //     // char a[] = "helloworld!";
    //     // char *p;
    //     // p = a;
    //     // printf(a);

    return 0;
}
