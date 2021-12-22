#include <stdio.h>
int main()
{
    int row_number;
    int line_number;
    for (row_number = 1; row_number <= 10; row_number++)
    {
        for (line_number = row_number; line_number <= 100; line_number += 10)
            printf("%d ", line_number);
        printf("\n");
    }

    return 0;
}
