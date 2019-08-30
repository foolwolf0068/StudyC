# include <stdio.h>
# include <string.h>
void cel2fahr();
void int2double();
int Factorial( const int N );
int even( int n );
double f( int n, double a[], double x );
int main()
{
    int N, NF;

    scanf("%d", &N);
    NF = Factorial(N);
    if (NF)  printf("%d! = %d\n", N, NF);
    else printf("Invalid input\n");



    printf("%f\n",10/3*3.0);
    int num1;
    int a,b,c;
    scanf("%d", &num1);
    a = num1/100;
    b = num1/10%10;
    c = num1%10;
    printf("%d\n", c*100+b*10+a);
    int fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
    printf("Int to Double\n");
    int2double();
    printf("Cel to Fah\n");
    cel2fahr();
    printf("The for loop----------\n");
    int f;
    for (f=0;f<=300;f += 20)
    {
        printf("%3d %6.1f\n", f, (5.0/9)*(f-32));
    }
    return 0;
}
void cel2fahr()
{
    double fahr, celsius;
    int lower, upper, step;
    lower = 10;
    upper = 150;
    step = 10;
    celsius = lower;
    while (celsius <= upper)
    {
        fahr = 1.8 * celsius + 32;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
void int2double()
{
    double fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5.0 * (fahr-32) / 9;
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
void PrintN ( int N )
{
    printf("%d\n", N);
}
int Factorial( const int N )
{
    if (N<0)
    {
        return 0;
    }
    else if (N<=1)
    {
        return 1;
    }
    else
    {
        return N*Factorial(N-1);
    }
}
int even( int n )
{
    if (n%2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
double f( int n, double a[], double x )
{
    double p=a[n];
    for (int i=n;i>=1;i--)
    {
        p = p*x+a[i-1];
    }
    return p;
}
