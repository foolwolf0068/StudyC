#include <stdio.h>
#include <stdlib.h>

#define MAXN 10

int Sum ( int List[], int N );

int main ()
{
    int List[MAXN], N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%d", &List[i]);
    printf("%d\n", Sum(List, N));

    return 0;
}

/* 你的代码将被嵌在这里 */
int Sum ( int List[], int N )
{
    int sum0=0;
    for(int i=0;i<N;i++)
    {
        sum0 += List[i];
    }
    return sum0;
}
