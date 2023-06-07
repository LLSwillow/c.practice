#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    getchar();
    char arr[1000];
    int i = 0;
    for (i = 0; i < N; i++)
    {
        gets(arr);
        puts(arr); // 输出形式puts()自带换行
        printf("\n");
    }
    while (~scanf("%s", arr))
    {
        printf("%s\n", arr);
        printf("\n");
    }
    return 0;
}