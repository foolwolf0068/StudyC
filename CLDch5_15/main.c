#include <stdio.h>
#include <stdlib.h>
int max(int , int);
int c;
int main()
{
    printf("Hello world!\n");
    {
        int a = 45, b = 98;
        static int sum;
        sum = max(a,b);
        a += b;
        {
            int a[] = {1, -2, 3, -4, 5}, i = 0;
            static int sum;
            for(i=0;i<5;i++)
            {
                if(a[i] < 0)
                {
                    c += a[i];
                }
                else
                {
                    sum += a[i];
                }
            }
            printf("������ = %d, ������ = %d\n", sum, c);
        }
        c = max(a, sum);
        printf("max = %d\n",c);
        c = a + b + sum;
    }
    printf("�ܺ� = %d\n",c);
    return 0;
}
int max(int a, int b)
{
    return (a>b)?(a):(b);
}
