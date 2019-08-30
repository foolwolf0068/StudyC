#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char num[5][14];
    int i=0, m=0, j=0, k=0;
    //int length = 0;
    char s[14];

    printf("请输入间隔数：");
    scanf("%d", &m);

    printf("请准备输入游戏者的名字\n");
    getchar();

    for (i=0; i<5; i++)
    {
        printf("第%d个人的名字：", i+1);
        gets(s);
        strcpy(num[i], s);
    }
    printf("出圈的顺序如下：\n");
    i = -1;
    for (k=1; k<=5; k++)
    {
        j = 0;
        while (j<m)
        {
            i++;
            if (i==5)
            {
                i = 0;
            }
            if (num[i][0] != '0')
            {
                j++;
            }
        }
        printf("%s ", num[i]);
        num[i][0] = '0';
    }
    printf("\n");
    return 0;
}
