#include <string.h>
#include <stdio.h>
// int main()
// {
//     int i, j, a;
//     for (i = 0; i <= 9; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             a = j * i;
//             printf("%d*%d=%d ", j, i, a);
//         }
//         printf("\n");
//     }
// }
int main()
{
    int a = 0;

    for (; a <= 100; a++)
    {
        if (a % 5 == 0)
        {
            printf("%d\n", a);
        }
    }
}
