#include <stdio.h>
int main()
{
    int a;
    int b;

    int i;
    scanf("%d %d", &a, &b);
    int c = a;
    for (i = 1; i < b; i++)
    {
        c = c * a;
    }
    printf("%d", c);
}
