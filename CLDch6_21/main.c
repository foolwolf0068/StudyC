#include <stdio.h>
#include <stdlib.h>
void max(int , int , int *);
int main()
{
    printf("Hello world!\n");
    int a, b, c;
    printf("Please enter two number: ");
    scanf("%d %d", &a, &b);
    max(a, b, &c);
    c = a + b + c;
    printf("c = %d\n", c);
    return 0;
}
void max(int a, int b, int *p)
{
    if(a<b)
    {
        *p = b;
    }
    else
    {
        *p = a;
    }
}
