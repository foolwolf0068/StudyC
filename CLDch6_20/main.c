#include <stdio.h>
#include <stdlib.h>
void swap(int *, int *);
int main()
{

    int a = 32;
    int b = 8;
    printf("Before swap In Main: a = %d, b = %d\n", a, b);
    int *p, *p2;
    p = &a;
    p2 = &b;
    swap(p, p2);
    printf("Now In Main: a = %d, b = %d\n", a, b);
    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("In Swap: a = %d, b = %d\n", *a, *b);
}
