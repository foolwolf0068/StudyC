#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void fun4_34_2();
void fun4_34_3();
int main()
{
    int i, sum=0, min=100;
    int a[8] = {75, 80, 83, 85, 86, 30};
    char *MeanLow[4] = {"人数", "平均成绩", "最低分数科目的成绩", "最低分数的科目"};
    char name[6][5] = {"数学","物理","外语","政治","体育"};
    printf("原始信息如下：\n");
    for (i=0; i<5; i++)
    {
        printf("%s: %d\n", name[i], a[i]);
    }
    for (i=0; i<3; i++)
    {
        printf("%s: %d\n", MeanLow[i], a[i+5]);
    }
    printf("%s: \n", MeanLow[i]);
    // compute
    for (i=0; i<5; i++)
    {
        sum += a[i];
        if (min > a[i])
        {
            min = a[i];
        }
    }
    a[6] = sum/5;
    a[7] = min;
    for (i=0; i<5; i++)
    {
        if (min==a[i])
        {
            strcpy(name[5], name[i]);
            break;
        }
    }
        printf("\n 全班各科平均成绩如下：\n");
        for (i=0; i<5; i++)
        {
            printf("%s: %d\n", name[i], a[i]);
        }
        printf("\n统计结果如下：\n");
        for (i=0; i<3; i++)
        {
            printf("%s: %d\n", MeanLow[i], a[i+5]);
        }
        printf("%s: %s\n\n\n", MeanLow[3], name[5]);

        fun4_34_3();
        return 0;
}
    //printf("Hello world!\n");
void fun4_34_3()
{
    int i, sum=0, min=100, *p;
    char **pcm;
    char (*pcn)[5];
    int a[8] = {75, 80, 83, 85, 86, 30};
    char *MeanLow[4] = {"人数", "平均成绩", "最低分数科目的成绩", "最低分数的科目"};
    char name[5][5] = {"数学","物理","外语","政治","体育"};
    printf("原始信息如下：\n");
    for (i=0; i<5; i++)
    {
        printf("%s: %d\n", name[i], a[i]);
    }
    for (i=0; i<3; i++)
    {
        printf("%s: %d\n", MeanLow[i], a[i+5]);
    }
    printf("%s: \n", MeanLow[i]);
    p = a;
    for (i=0; i<5; i++)
    {
        sum += p[i];
        if (min>p[i])
        {
            min = p[i];
        }
    }
    p[6] = sum/5;
    p[7] = min;
    pcm = MeanLow;
    pcn = name;
    printf("\n全班各科平均成绩如下：\n");
    for (i=0; i<5; i++)
    {
        printf("%s: %d\n", pcn[i], *(p+i));
    }
    printf("\n统计结果如下：\n");
    for (i=0; i<3; i++)
    {
        printf("%s: %d\n", pcm[i], *(p+i+5));
    }
}
