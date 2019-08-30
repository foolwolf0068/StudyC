#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, q, flag = 1;
    scanf("%d/%d", &a, &b);
    if(a>=10 && a<b && b<100)
    {
        printf("0.");
        do
        {
            a = a * 10;
            q = a/b;
            printf("%d", q);
            a = a - b*q;
            flag++;
        }while(a!=0 && flag<=200);
        printf("\n");
    }
    return 0;
}
