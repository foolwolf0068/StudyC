#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y,w;
    scanf("%d %d",&y,&w);
    double rate,salary;
    rate = (y>=5)? 50:30;
    salary = rate*((w<40)? w:(1.5*w-20));
    printf("%.2f\n",salary);
    int x;
    scanf("%d",&x);
    double cost;
    cost = (x<=15)?(x*4.0/3.0):(x*2.5-17.5);
    printf("%.2f\n",cost);
    return 0;
}
