#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B,i;
    scanf("%d %d", &A, &B);
    for(i=0; i<=B-A; i++)
    {
        printf("%5d",A+i);
        if ((i+1) % 5==0) printf("\n");
    }
    if ((i) % 5) printf("\n");
    printf("Sum = %d\n", (A+B)*(B-A+1)/2);
    return 0;
}
