#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    if((a>=0) && (a<=500))
    {
        if (a>60)
        {
            printf("Speed: %d - Speeding\n", a);
        }
        else
        {
            printf("Speed: %d - OK\n", a);
        }
    }
    return 0;
}
