#include <stdio.h>
#include <stdlib.h>
void cp1_5_1();
void cp1_5_2();
void cp1_5_2_1();//�ַ�������
void cp1_5_2_2();//�ַ�������
void cp1_5_3();//�м���
int main()
{
    printf("Hello world!\n");
    cp1_5_2_2();
    cp1_5_2_1();
    //cp1_5_2();
    return 0;
}
void cp1_5_1()
{
    /* �����븴�Ƶ�������汾1*/
    int c;
    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}
void cp1_5_2()
{
    /* �����븴�Ƶ�������汾2*/
    int c;
    while ((c = getchar()) != EOF)
    {
        putchar(c);
        //c = getchar();
    }
}
void cp1_5_2_1()//�ַ�����1��
{
    long nc;
    nc = 0;
    while (getchar() != EOF)
    {
        ++nc;
    }
    printf("%ld\n", nc);
}
void cp1_5_2_2()//�ַ�����2��
{
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
    {
        ;
    }
    printf("%.0f\n", nc);
}
// �м���
void cp1_5_3()
{
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++nl;
        }
    }
    printf("%d\n", nl);
}
