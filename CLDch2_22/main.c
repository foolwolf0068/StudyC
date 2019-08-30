#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s;
    int n;
    s = (char *)malloc(50);
    scanf("%s",s);
    for (n=0; *s != '\0'; s++)
    {
        n++;
    }
    s = s-n;
    free(s);
    printf("%d", n);
    /** 2-23*/
    int i;
    int *p;
    p = (int *)malloc(8);
    for (i = 0; i < 2; i++, p++)
    {
        scanf("%d", p);
    }
     p -= 2;
     for ( i = 0; i < 2; ++i, ++p)
     {
         printf("%d", *p);
         printf("\n");

     }
     p -= 2;
     free(p);
    printf("Hello world!\n");
     char *p1, *q1;
    p1 = q1 = (char *)malloc(100);
    scanf("%s", q1);
    while (*p1 != '\0')
    {
        p1++;
    }
    printf("%d\n", p1-q1);
    free(q);
    return 0;
}
