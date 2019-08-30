#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Nmax 200
int isPrime(int n);
int main()
{
    /*int x=1, y=012;
    printf("%d",y*x++);
printf("\n");
int k;
while(k!=0) k=k-1;
//printf("%d", 17%4 /8);
int i=6;
	if ( i<= 6 )
		printf("hello\n");;
	else
		printf("bye-bye\n");;*/
printf("%d",(a=2)&&(b= -2));

printf("111\n");
    int a[Nmax];
    int n,m,num=3;
    a[0]=2;
    for(int i=1;i<Nmax;)
    {
        if (isPrime(num))
        {
            a[i] = num;
            i++;
        }
        num += 2;
    }
    for(int i=0;i<Nmax;i++)
    {
        printf("%d ", a[i]);
    }
    scanf("%d %d", &n, &m);
    int sum0=0;
    for(int i=n-1;i<m;i++)
    {
        sum0 += a[i];
    }
    printf("%d\n",sum0);
    return 0;
}
int isPrime(int num)
{
    for (int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0) return 0;
    }
    return 1;
}
