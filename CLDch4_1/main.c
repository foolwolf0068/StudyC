#include <stdio.h>
#include <stdlib.h>
/** 数组与指针的关系*/
int main()
{
    int i, a[] = {1, 3, 5, 7, 8};
    *(a + 4) = 86;
    for (i=0; i<5; i++)
    {
        printf("%d %d ", a[i], *(a + i));
    }
    printf("\n");
    /** 4.2*/
    int *p = a;
    for (i=0; i<5; i++)
    {
        printf("%d %d %d ", a[i], *(a+i), *(p+i));
    }
    printf("\n%#p %#p\n", a, p);
    for (i=0; i<5; i++)
    {
        printf("%d ", p[i]);
    }
    for (; p<a+5; p++)
    {
        printf("%d ", *p);
    }
    for (--p; p>=a; --p)
    {
        printf("%d ", *p);
    }
    printf("\n");
    return 0;
}
