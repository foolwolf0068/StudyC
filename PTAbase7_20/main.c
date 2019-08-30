#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,N;
    scanf("%d", &N);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d*%d=%-4d",j,i,j*i);
        }
        printf("\n");
    }
    // 7_6
    int b;
    float a,d;
    char c;
    scanf("%f %d %c %f", &a,&b,&c,&d);
    printf("%c %d %.2f %.2f", c,b,a,d);
    return 0;
}
