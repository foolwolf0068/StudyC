#include <stdio.h>
#include <stdlib.h>
struct LIST{
    int a;
    int b;
}d[3], b[3], *p, *p2;
struct LIST make(int , int);
struct LIST *change(struct LIST*, struct LIST []);
void change1(struct LIST *b, struct LIST d[]);
void disp(struct LIST []);
int main()
{
    printf("Hello world!\n");
    d[0] = make(25, 52);
    d[1] = make(85, 58);
    d[2] = make(68, 86);
    p = b;
    change(p,d);
    p2 = b;
    change(p2,d);
    disp(d);
    disp(b);
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

struct LIST* change(struct LIST *b, struct LIST d[])
{
    int i = 0;
    for(i=0; i<3; i++)
    {
        (b+i)->a = d[i].a + i;
        (b+i)->b = d[i].b + i;
    }
    return b;
}
void change1(struct LIST *b, struct LIST d[])
{
    int i = 0;
    for(i=0; i<3; i++)
    {
        (b+i)->a = d[i].a + i;
        (b+i)->b = d[i].b + i;
    }
}
