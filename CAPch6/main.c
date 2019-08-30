#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isPrime(int n);
int isOdd(int n);
int main()
{
    int i, a, n;
    scanf("%d", &n);
    printf("%d=",n);
    if (isPrime(n))
    {
        printf("%d", n);
    }
    else
    {
        a = n;
        if (isOdd(a))
        {
            i = 3;
        }
        else
        {
            i = 2;
        }
        int count = 0, counti = 0;
        while (a/i)
        {
            if ((isPrime(i))&&(a%i==0))
            {
                if (!count)
                {
                    printf("%d",i);
                    count++;
                }
                else
                {
                    printf("x%d",i);
                }
                a /= i;
            }
            if ((a%i !=0))
            {
                if (isOdd(a))
                {
                    if (!counti)
                    {
                        i = 3;
                        counti++;
                    }
                    else
                    {
                        i += 2;
                    }
                }
            }
        }
    }
    return 0;
}
int isPrime(int n)
{
    int flag = 1;
    if ((n%2 == 0) && (n != 2))
    {
        flag = 0;
    }
    else
    {
        int i;
        for (i = 3; i <= sqrt(n); i += 2)
        {
            if ((n%i==0)&&(n!=i))
            {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}
int isOdd(int n)
{
    return (n%2);
}
