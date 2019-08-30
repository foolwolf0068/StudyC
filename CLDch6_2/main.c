#include <stdio.h>
#include <stdlib.h>
struct LIST{
    int a;
    int b;
}d[3];

struct LIST make(int, int);
void disp(struct LIST []);
void display(struct LIST *);
int main()
{
    printf("Hello world!\n");
    d[0] = make(21, 12);
    d[2] = make(54, 45);
    d[1] = make(85, 58);
    disp(d);
    display(d);
    return 0;
}

struct LIST make(int x, int y)
{
    struct LIST temp;
    temp.a = x;
    temp.b = y;
    return temp;
}

void disp(struct LIST d[])
{
    int i;
    for(i=0; i<3; i++)
    {
        printf("d[%d].a = %d, d[%d].b = %d\n", i, d[i].a, i, d[i].b);
    }
}

void display(struct LIST *p)
{
    int i;
    for(i=0; i<3; i++)
    {
        printf("d[%d].a = %d, d[%d].b = %d\n", i, (p+i)->a, i, (p+i)->b);
    }
}
