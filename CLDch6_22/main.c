#include <stdio.h>
#include <stdlib.h>
void swap(int []);
int main()
{
    //printf("Hello world!\n");
    int a[] = {23, 348};
    printf("Before swap in main: a[0] = %d, a[1] = %d\n", a[0], a[1]);
    swap(a);
    printf("After swap in main: a[0] = %d, a[1] = %d\n", a[0], a[1]);
    return 0;
}
void swap(int a[])
{
    int temp;
    temp = a[0];
    a[0] = a[1];
    a[1] = temp;
}
