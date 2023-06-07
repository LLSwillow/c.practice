#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100];
    gets(arr);
    int i = 0;
    for (i = strlen(arr) - 1; i >= 0; i--)
    {
        printf("%c", arr[i]);
    }
    return 0;
}