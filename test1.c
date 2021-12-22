#include <stdio.h>
#include <string.h>
int add(int n)
{

    if (n > 9)
    {
        return add(n / 10) + n % 10;
    }
    return 0;
}
int main()
{
    int n;
    int ret = 0;
    scanf("%d", &n);
    ret = add(n);
    if (ret != 0)

        printf("%d", ret);
    else
        printf("%d", n);
}
// void exchange(char *parr, int sz)
// {
//     int left = 0;
//     int right = sz - 1;
//     int *temp;
//     while (left < right)
//     {
//         temp = parr[left];
//         parr[left] = parr[right];
//         parr[right] = temp;
//         left++;
//         right--;
//     }
// }

// int main()
// {
//     char arr[] = "abcdef";
//     int sz = strlen(arr);
//     // char *p[] = arr;
//     printf("%s\n", arr);
//     exchange(arr, sz);
//     printf("%s", arr);
// }
// int is_prime(int n)
// {
//     int j = 0;
//     for (j = 2; j < n; j++)
//     {
//         if (n % j == 0)
//             return 0;
//     }
//     return 1;
// }
// int main()
// {
//     int i = 0;
//     int count = 0;
//     for (i = 100; i < 201; i++)
//     {

//         if (is_prime(i) == 1)
//         {
//             count++;
//             printf("%d\n", i);
//         }
//     }
//     printf("一共%d素数", count);
// }
// int find(int arr[], int n, int sz)
// {
//     int right = sz;
//     int left = 0;

//     while (left <= right)
//     {
//         int mid = (left + right) / 2;
//         if (arr[mid] > n)
//         {
//             right = mid - 1;
//         }
//         else if (arr[mid] < n)
//         {
//             left = mid + 1;
//         }
//         else
//             return mid;
//     }
//     return -1;
// }
// int main()
// {
//     int n;
//     int ret;
//     int sz;
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     sz = sizeof(arr) / sizeof(arr[0]);
//     scanf("%d", &n);
//     ret = find(arr, n, sz);
//     if (ret == -1)
//     {
//         printf("找不到；\n");
//     }
//     else
//         printf("找到l %d", ret);
// }
// void add(int *pnum)
// {
//     (*pnum)++;
// }

// int main()
// {
//     int num = 0;
//     add(&num);
//     printf("%d\n", num);
//     add(&num);
//     printf("%d\n", num);
//     add(&num);
//     printf("%d\n", num);
// }
// int fu(int n)
// {
//     int i = 1;

//     for (i = 2; i < n; i++)
//     {
//         if (n / i == 0)
//             return 0;
//     }
//     if (i == n)
//         return 1;
//     else
//         return 0;
// }
// int main()
// {
//     int n;
//     int ret;
//     printf("输入一个数字：\n");
//     scanf("%d", &n);
//     ret = fu(n);
//     if (ret == 1)
//         printf("这是质数\n");
//     else
//         printf("这不是；");
// }
// int main()
// {
//     int n;
//     printf("输入一个数字\n");
//     scanf("%d", &n);
//     if (n % 2 == 0)
//         printf("这是偶数\n");
//     else
//         printf("这是奇数");
// }
