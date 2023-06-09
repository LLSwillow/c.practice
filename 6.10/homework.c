#include <stdio.h>
int main()
{
    int a, b, c, s, count = 0;
    char f;
    while (~(s = scanf("%d%c%d=%d", &a, &f, &b, &c)))
    {
        if (s == 3)
            getchar();
        else if (f == '+' && c == a + b)
            count++;
        else if (c == a - b)
            count++;
    }
    printf("%d", count);
    return 0;
}