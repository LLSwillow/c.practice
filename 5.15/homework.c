#include <stdio.h>
int main()
{
    char op;
    int a, b, c, k, score = 0;
    while (~(k = scanf("%d%c%d=%d", &a, &op, &b, &c)))
    {
        if (k == 3)
        {
            getchar();
        }
        else if (op == '+' && c == a + b)
        {
            score++;
        }
        else if (op == '-' && c == a - b)
        {
            score++;
        }
    }
    printf("%d", score);
    return 0;
}