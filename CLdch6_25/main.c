#include <stdio.h>
#include <stdlib.h>
void display(int a[][3]);
void display1(int (*a)[3]);
void display2(int *p);
int main()
{
    //printf("Hello world!\n");
    int a[][3] = {{15, 38 ,-52},{-97, -85, 88},{331, 235, -435}};
    display(a);
    display1(a);
    int *p;
    p = &a[0][0]; // p = a[0];
    display2(p);
    return 0;
}
void display(int a[][3])
{
    printf("数组作为输入参数：\n");
    int i, j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void display1(int (*a)[3])
{
    printf("指针数组作为输入参数：\n");
    int i, j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void display2(int *p)
{
    printf("指针作为输入参数：\n");
    int i;
    for(i=0; i<9; i++, p++)
    {
        if(i != 0 && i%3 == 0)
        {
            printf("\n");
        }
        printf("%5d", *p);
    }
    printf("\n");
}
