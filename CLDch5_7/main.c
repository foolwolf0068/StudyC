#include <stdio.h>
#include <stdlib.h>
void swap(int, int);
void swap1(int *, int *);
void swap2(int *p, int *t);
int main()
{
    int a = 55, b = 66;
    swap(a,b);
    printf("In main: a = %d, b = %d\n", a, b);
    printf("The point\n");
    printf("&a = %#p\t &b = %#p\n", &a, &b);
    printf("swap1运行：\n");
    swap1(&a, &b);
    printf("返回后数据为: a = %d, b = %d\n", a, b);
    printf("swap2运行：\n");
    swap2(&a, &b);
    printf("返回后数据为: a = %d, b = %d\n", a, b);
    return 0;
}
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("In swap: a = %d, b = %d\n", a, b);
}
void swap1(int *p, int *t)
{
    int temp;
    printf("&p = %#p\t &t = %#p\n", &p, &t);
    printf(" p = %#p\t  t = %#p\n", p, t);
    temp = *p;
    *p = *t;
    *t = temp;
    printf("交换数据为：a = %d, b = %d\n", *p, *t);
}
void swap2(int *p, int *t)
{
    int *temp;
    printf("交换前地址为：\n");
    printf("&p = %#p\t &t = %#p\n", &p, &t);
    printf(" p = %#p\t  t = %#p\n", p, t);
    temp = p;
    p = t;
    t = temp;
    printf("交换后地址为：\n");
    printf("&p = %#p\t &t = %#p\n", &p, &t);
    printf(" p = %#p\t  t = %#p\n", p, t);
    printf("交换数据为：a = %d, b = %d\n", *p, *t);
}
