#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");
    int A[51]={0};
    int i, y, n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &y);
        A[y]++;
    }
    for(i=0; i<51; i++)
    {
        if(A[i]==0)
        {
            continue;
        }
        printf("%d:%d\n",i,A[i]);
    }
    return 0;
}
