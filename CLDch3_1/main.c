#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, fibo[20] = {0,1};
    printf("%-5d%-5d", fibo[0], fibo[1]);
    for (n=2; n<20;n++)
    {
        fibo[n] = fibo[n-1] + fibo[n-2];
        if (n%5==0)
        {
            printf("\n");
        }
        printf("%-5d", fibo[n]);
    }
    printf("\n");
    //printf("Hello world!\n");
    /** 3.2*/
    int i = 0, a[3] = {2, 4,6};
    printf("%#p %#p %#p\n", a, &a, &a[0]);
    printf("%#p\n", &i);

    for ( i=0; i<3; i++)
    {
        printf("%#p ", &a[i]);
    }
    printf("\n");

    for ( i=0; i<3; i++)
    {
        printf("%#p ", a + i);
    }
    printf("\n");

    for ( i=0; i<3; i++)
    {
        printf("%#p ", &a + i);
    }
    printf("\n");
    /** 3.11*/
    int i1, a1[5];
    char ch1[5];
    for (i1=0; i1<5; i1++)
    {
        scanf("%d", a+i1);
    }
    for (i1=0; i1<5; i1++)
    {
        printf("%d", *(a+i));
    }
    for (i1=0; i1<5; i1++)
    {
        scanf("%c", (ch1+i1));
    }
    ch1[i1] = '/0';
    printf(ch1);
    printf('\n');
    return 0;
}
