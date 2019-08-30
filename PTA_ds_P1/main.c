#include <stdio.h>
#include <stdlib.h>
#define Nmax 100001
int MaxSubseqSumOl(int a[], int n);
int main()
{
    int N = 0;
    scanf(" %d", &N);
    int a[Nmax] = {0};
    int i = 0;
    while (i<N)
    {
        scanf("%d",&a[i]);
        i++;
    }
    printf("%d\n", MaxSubseqSumOl(a, N));
    return 0;
}
int MaxSubseqSumOl(int a[], int n)
{
    int thisSum, maxSum;
    int i;
    thisSum = 0;
    maxSum = 0;
    for (i = 0; i< n; i++)
    {
        thisSum += a[i];
        if (thisSum>maxSum)
        {
            maxSum = thisSum;
        }
        else if (thisSum < 0)
        {
            thisSum = 0;
        }
    }
    return maxSum;
}
