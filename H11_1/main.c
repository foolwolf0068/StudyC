#include <stdio.h>
#include <stdlib.h>
int main1();//数组下标访问数组
int main2();//解引用访问数组
int main3();//指针访问数组
int main()
{
    printf("Hello world!\n");
    main3();
    return 0;
}

int main1()
{
int a[5], i;
for (i=0; i<5; i++)
{
scanf("%d", &a[i]);
}
for (i=0; i<5; i++)
{
printf("%4d", a[i]);
}
printf("\n");
return 0;
}
int main2()
{
int a[5], i;
for (i=0; i<5; i++)
{
scanf("%d", a+i);
}
for (i=0; i<5; i++)
{
printf("%4d", *(a+i));// 解引用
}
printf("\n");
return 0;
}
//指针访问数组
int main3()
{
int a[5], i, *p = NULL;
p = a;
for (i=0; i<5; i++) // 指针运算
{
scanf("%d", &p[i]);
}
p = a;
for (i=0; i<5; i++)
{
printf("%4d", p[i]);
}
printf("\n");
return 0;
}
