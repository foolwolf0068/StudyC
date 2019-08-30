#include <stdio.h>
#include <stdlib.h>
struct LIST
{
    int a;
    int b;
} d = {68, 86};
struct LIST swap(struct LIST);
int main()
{
    printf("Hello world!\n");
    printf("Before call a = %d, b = %d\n", d.a, d.b);
    d = swap(d);
    printf("After call a = %d, b = %d\n", d.a, d.b);
    return 0;
}
struct LIST swap(struct LIST s)
{
    int temp;
    temp = s.a;
    s.a = s.b;
    s.b = temp;
    printf("In function swap : a = %d, b = %d\n", s.a, s.b);
    return s;
}
