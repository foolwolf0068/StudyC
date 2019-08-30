#include <stdio.h>
#include <stdlib.h>
int qq(int);
int main()
{
    //printf("Hello world!\n");
    int n;
    n = 100;
    printf("切100刀最多可分成%d块。\n", qq(n));
    return 0;
}
int qq(int n)
{
    int i = 0;
    int q[101];
    q[0] = 1;
    for(i=1;i<=n;i++)
    {
        q[i] = q[i-1] + i;
    }
    return q[n];
}
