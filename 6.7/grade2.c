#include <stdio.h>

struct stu
{
    char id[20];
    char name[20];
    int grade[3];
};

int main()
{
    int N; // 学生人数
    scanf("%d", &N);
    struct stu s[N];
    int i = 0, j = 0;
    for (i = 0; i < N; i++)
    {
        scanf("%s %s %d %d %d", &s[i].id, &s[i].name, &s[i].grade[0], &s[i].grade[1], &s[i].grade[2]);
    }
    double ave[3];
    int sum = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < N; j++)
        {
            sum += s[j].grade[i];
        }
        ave[i] = sum / N;
        printf("%.2lf ", ave[i]);
        sum = 0;
    }
    printf("\n");
    double max = ave[0];
    int m = 0;
    for (i = 0; i < 3; i++)
    {
        if (max < ave[i])
        {
            max = ave[i];
            m = i;
        }
    }
    printf("%s %s %d %d %d", s[m].id, s[m].name, s[m].grade[0], s[m].grade[1], s[m].grade[2]);

    return 0;
}
