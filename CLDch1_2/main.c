#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 65;
    printf("%d, %p, %d\n", a, &a, *&a);
    int addr;
    addr = (int)&a;//0x0060FEFC;
    printf("0x%p, 0x%p, 0x%p\n", &a, addr, &addr);
    printf("%d, %d, 0x%p\n", a, *&a, *&addr);
    // printf("%d\n", *addr); // ��Ϊ����ϵͳ��֪��addr�洢���ǵ�ַ�����Խ�����Ϊ���������뱨��
    printf("%d\n", *(int *)addr); //��addr����ǿת�����Խ�����
    /** 1-4 ����ָ�����*/
    int *p;
    p = &a;
    printf("0x%p, 0x%p, 0x%p\n", &a, p, &p);
    printf("%d, %d, %d\n", a, *&a, *p);
    /** 1-5 �����ַ�ָ��*/
    char b = 'B';
    int addr2;
    addr2 = (int)&b;
    printf("0x%p, 0x%p, 0x%p\n", &b, addr2, (char *)addr2);
    printf("%c, %c, %c\n", b, *&b, *(char*)addr2);
    /** 1-6 �ַ�ָ��*/
    b = 'v';
    char *pchar;
    pchar = &b;
    printf("0x%p, 0x%p, 0x%p\n", &b, &pchar, pchar);
    printf("%c, %c, %c\n", b, *&b, *pchar);
    printf("Hello world!\n");
    return 0;
}
