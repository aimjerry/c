#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *Getmemory(char *p)
{
    p = (char *)malloc(100);

    return p;
}
void test(void)
{
    char *str = NULL;
    str = Getmemory(str);
    strcpy(str, "hello world");
    printf(str);
    free(str);
    str = NULL;
}
int main()
{
    test();
    return 0;
}

// int main()
// {
//     int *p=(int *)malloc(5*sizeof(int));
//     // int *p=(int*)calloc(10,sizeof(int));
//     if(p==NULL)
//     {
//         return 0;
//     }
//     else
//     {
//         int i=0;
//         for(i=0;i<5;i++)
//         {
//             *(p+i)=i;
//         }
//     }
//     free(p);
//     p=NULL;
// }
