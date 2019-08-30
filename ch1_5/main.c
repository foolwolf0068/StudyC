#include <stdio.h>
#include <stdlib.h>
void cp1_5_1();
void cp1_5_2();
void cp1_5_2_1();//字符计数；
void cp1_5_2_2();//字符计数；
void cp1_5_3();//行计数
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
    /* 将输入复制到输出；版本1*/
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
    /* 将输入复制到输出；版本2*/
    int c;
    while ((c = getchar()) != EOF)
    {
        putchar(c);
        //c = getchar();
    }
}
void cp1_5_2_1()//字符计数1；
{
    long nc;
    nc = 0;
    while (getchar() != EOF)
    {
        ++nc;
    }
    printf("%ld\n", nc);
}
void cp1_5_2_2()//字符计数2；
{
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
    {
        ;
    }
    printf("%.0f\n", nc);
}
// 行计数
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
