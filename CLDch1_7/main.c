#include <stdio.h>
#include <stdlib.h>
struct st
{
    int a, b;
    double f;
}s, *ps;
int main()
{
    double a = 6.8;
    double *pd = &a;
    float b = 6.5;
    float *pf = &b;
    char c = 'G';
    char *pc = &c;
    int *p = NULL;
    printf("%d %d %d %d %d\n", sizeof(pd), sizeof(pf), sizeof(pc), sizeof(p), sizeof(ps));

    int a1 = 65, *pa;
    pa = &a1;
    printf("a1 = %d, a1's address is %#p, p points to the address %#p.\n", a1, &a1, pa);
    printf("Via the name is %d, ͨ��p�ڵĵ�ַ%#pʹ��%d.\n", a1, pa, *pa);
    printf("pָ��ĵ�ַΪ%#p, ���p�ĵ�ַ��%#p��\n", pa, &pa);
    return 0;
}
