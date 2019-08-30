#include <stdio.h>
#include <stdlib.h>
int *sp(int []);
int *sp1(int []);
int main()
{
    printf("Hello world!\n");
    int a[3] = {1, 3, 5}, i, *p;
    for(i=0; i<3; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    p = sp1(a);
    for(i=0; i<3; i++)
    {
        printf("%d ", *(p+i));
    }
    printf("\n");
    return 0;
}
int *sp(int s[])
{
    int *p;
    p = (int *)(malloc(3*sizeof(s)));
    *p++ = 2 + s[0];
    *p++ = 4 + s[1];
    *p = 6 - s[2] + *(p-1);
    p -= 2;
    return p;
}
int *sp1(int s[])
{
    int *p;
    p = (int *)(malloc(sizeof(s)));
    p[0] = 2 + s[0];
    p[1] = 4 + s[1];
    p[2] = 6 - s[2] + p[1];
    return p;
}
