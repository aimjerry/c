#include <stdio.h>>
int main()
{
    double bim, wh, h;
    printf("请输入您的体重(kg)：\n");
    scanf("%lf\n", &wh);
    printf("请输入您的身高(m)：");
    scanf("%lf\n", &h);
    bim = wh / (h * h);
    printf("您的体脂指数= %lf", bim);
}
