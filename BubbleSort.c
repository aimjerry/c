#include <stdio.h>
#include <assert.h>
void bubblesort(int *p, int sz)
{
    assert(p != NULL);
    int i = 0;
    int j = 0;
    int temp = 0;
    int flag = 1;
    for (; i < sz - 1; i++)
    {
        for (j = 0; j < sz - 1 - i; j++)
        {

            if (*(p + j) < *(p + j + 1))
            {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
                flag = 0;
            }
        }
        if (flag == 1)
            break;
    }
}
int main()
{
    int i;
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sz = sizeof(a) / sizeof(a[0]);
    for (i = 0; i < sz; i++)

        printf("%d", a[i]);
    bubblesort(a, sz);
    printf("交换后：\n");
    for (i = 0; i < sz; i++)
        printf("%d", a[i]);
    printf("\n%p", a);
}
