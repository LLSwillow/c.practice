#include <stdio.h>

#define N 3

struct stu
{
    int id;
    char name[20];
    float score[3];
    float aver;
};
void print(struct stu p)
{
    printf("max:\n");
    printf("id:%d name:%s score: %.2f %.2f %.2f aver:%.2f\n", p.id, p.name, p.score[0], p.score[1], p.score[2], p.aver);
}
struct stu max(struct stu p[])
{
    int i, m = 0;
    for (i = 0; i < N; i++)
    {
        if (p[i].aver > p[m].aver)
        {
            m = i;
        }
    }
    return p[m];
}
void input(struct stu stu[])
{
    int i;
    printf("Please enter each student's information: student number, name, grades of three courses:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d %s %f %f %f", &stu[i].id, &stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
        stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3.0;
    }
}
int main()
{
    struct stu s[N];
    struct stu *p = s; // 指向结构体数组的指针
    input(p);

    print(max(p));
    return 0;
}