#include <stdio.h>
#include <stdlib.h>
void main1();
void main2();
void main3();
int main()
{
    printf("Hello world!\n");
    main2();
    main1();
    main3();
    return 0;
}
void main1()
{
    int a = 0;
    int *pa = &a; // ָ������ڶ���ʱ��ó�ʼ��
    printf("a=%d\n",a);
    printf("&a=%p\n",&a);
    printf("pa=%p\n",pa);
}
void main2()
{
    int a = 0;
    //int *pa; // ��֪��ָ�����ָ��˭������NULL��
    int *pa = NULL;

    printf("a=%d\n",a);
    printf("&a=%p\n",&a);
    printf("pa=%p\n",pa);
}
void main3()
{
    int a = 0, b = 1;
    int *pa, *pb;
    pa = &a;
    pb = &b;
    printf("a=%d, b=%d\n", a, b);
    printf("*pa=%d, *pb=%d\n", *pa, *pb);
}
