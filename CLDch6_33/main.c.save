#include <stdio.h>
#include <stdlib.h>

double s1 = 0.0;
double s2 = 1.0;
double step = 0.01;
double func(), FindValue(double(*)());
// 6.34
double Value(double (*)());

int main()
{
    printf("Hello world!\n");
    double (*p)();
    double x;
    p = func;
    x = FindValue(p);
    printf("最小值是： %2.5f\n", x);

    printf("最小值是： %2.5f\n", Value(func));
    return 0;
}
double func(double x)
{
    return (10*x*x - 9*x + 2);
}
double FindValue(double (*f) ())
{
    double x = s1;
    double y = (*f)(x);
    while(x<=s2)
    {
        if(y>(*f)(x))
        {
            y = (*f)(x);
        }
        x += step;
    }
    return y;
}
double Value(double (*f)())
{
    double x=s1, y = (*f)(x);
    while(x<=s2)
    {
        if(y>(*f)(x))
        {
            y = (*f)(x);
        }
        x += step;
    }
    return y;
}
