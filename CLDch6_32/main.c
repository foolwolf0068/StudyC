#include <stdio.h>
#include <stdlib.h>

#define STEP 0.1
double f1(double x);
double f2(double x);
int main()
{
    printf("Hello world!\n");
    int i;
    double x, (*p)(double);// double (*p)(double) = double (*p)()
    for(i=0; i<2; i++)
    {
        printf("第%d个方程： \n", i+1);
        if (i==0)
        {
            p = f1;//p = f1(x);
        }
        else
        {
            p = f2;//p = f1(x);
        }
        for(x=-1; x<=1; x += STEP)
        {
            printf("%f\t%f\n", x, (*p)(x));
        }
    }

    return 0;
}
double f1(double x)
{
    return (x*x*x - 4*x +6);
}
double f2(double x)
{
    return (x*x - 3*x);
}
