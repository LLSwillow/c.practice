#include <stdio.h>
int main()
{
    char n[100];
    int i = 0;
    while ((scanf("%s", &n)) != EOF)
    {
        if (n[0] == '0')
            break;
        int num = 0;
        for (i = 0; n[i] != 0; i++)
        {
            num = num * 10 + n[i] - '0';
            num %= 17;
        }
        printf("%d\n", (num == 0));
    }
    return 0;
}
/*
核心代码是这段，对于超大数字，单纯的用求模%符号已经没有用了
这段代码的意思是从最高的两位数字开始求模，求模的结果（是个位数）升一位，再取新的一个数字，组成新的二位数，继续求模
while (ch != '\n')
        {
            x *= 10;
            x += ch - '0'; //注意所有数字都是以字符形式读入，因此进行运算前需要进行 ch - '0' 操作
            x %= 17;
            scanf("%c", &ch);
        }*/