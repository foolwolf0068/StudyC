#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int X,Y,N;
    int count=0;
    scanf("%d", &N);
    for(X=1; X<sqrt(N); X++)
    {
        for (Y=X+1;Y<=sqrt(N-X*X); Y++)
        {
            if((X*X+Y*Y)==N)
            {
                printf("%d %d\n",X,Y);
                count++;
            }
        }
    }
    if (!count)
    {
        printf("No Solution\n");
    }
    return 0;
}
