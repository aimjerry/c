#include <stdio.h>
int main()
{
    int row;
    int line = 1;
    int i, j;
    int temp;
    int space;
    scanf("%d", &row);
    temp = row;
    for (i = 0; i <= row; i++)
    {
        for (space = 1; space < temp; space++)
            printf(" ");
        for (j = i + 1; j <= line; j++)
            printf("%d", j);
        for (; j <= i + 1; j--)
            printf("%d", j);
        line += 2;
        temp--;
        printf("\n");
    }

    return 0;
}
// int main()
// {
//     int row;
//     int i, j;
//     scanf("%d", &row);
//     for (i = 1; i <= row; i++)
//     {
//         for (j = 1; j <= i; j++)
//             printf("%d ", j);
//         printf("\n");
//     }
//     while (row != 0)
//     {
//         for (line = 1; line <= row; line++)
//             printf("*");
//         printf("\n");
//         row--;
//     }
// }
// }
