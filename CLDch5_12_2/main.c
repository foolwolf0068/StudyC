
#include "find.h"
int main()
{
    double a, b;
    int a1[255]={0};
    a1['A'] = 1;
    printf("Input a and b:\n");
    scanf("%lf%lf", &a, &b);
    printf("max = %lf\n", max(a,b));
    //printf("mean = %lf\n", mean1(a,b));
    printf("Hello world!\n");
    return 0;
}
