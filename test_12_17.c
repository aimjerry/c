#include <stdio.h>
int main()
{
    FILE *pf = fopen("test.txt", "r");
    if (pf == NULL)
    {
        perror("fopen");
        return 1;
    }
    int ret = fgets(pf);
    printf("%c\n", ret);
    ret = fgets(pf);
    printf("%c\n", ret);

    fclose(pf);
    pf = NULL;
}
