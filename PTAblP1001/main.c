#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=0;
    scanf("%d",&n);
    while (n>1)
    {
        if (n%2)
        {
            n = (3*n+1)/2;
        }
        else
        {
            n /= 2;
        }
        i++;
    }
    printf("%d\n",i);
    return 0;
}
