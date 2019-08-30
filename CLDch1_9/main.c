#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int a = 55, b = 66, *p = &a;
    printf("&a:%#p, &b:%#p, &p:%#p\n", &a, &b, &p);
    printf("%d %d &a:%#p &p:%#p\n", a, b, p, &p);
    a = 88;
    *p = a;
    printf("%d %d &a:%#p &p:%#p\n", a, *p, p, &p);
    p = &b;
    printf("%d %d &a:%#p &p:%#p\n", a, *p, p, &p);
    /** */
    char str[] = "We are here! Where are you?", bstr[28], *pStr;
    int i = 0;
    pStr = bstr;
    while (pStr[i]=str[i])
    {
        i++;
    }
    printf(str);printf("\n");
    printf(bstr);printf("\n");
    return 0;
}
