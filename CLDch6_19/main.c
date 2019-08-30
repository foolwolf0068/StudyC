#include <stdio.h>
#include <stdlib.h>
union data{
    int a[10];
    int b[2][5];
};
void display(const union data);
int main()
{
    // printf("Hello world!\n");
    union data ab;
    int i;
    for(i=0; i<10; i++)
    {
        ab.a[i] = 21 + i;
    }
    display(ab);
    return 0;
}
void display(const union data a)
{
    int i, j;
    for(i=0; i<2; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%3d", a.b[i][j]);
        }
        //printf("\n");
    }
    printf("\n");
}
