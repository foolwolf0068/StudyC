#include <stdio.h>
#include <stdlib.h>
struct LIST{
    int a;
    int b;
}d[3], b;

struct LIST make(int, int);
struct LIST change(struct LIST b, struct LIST []);
void disp(struct LIST[]);

int main()
{
    printf("Hello world!\n");
    d[0] = make(25, 52);
    d[1] = make(85, 58);
    d[2] = make(68, 86);
    b = change(b,d);
    disp(d);
    printf("b.a = %d\t\tb.b = %d\n", b.a, b.b);
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

struct LIST change(struct LIST b, struct LIST d[])
{
    b.a = d[0].a;
    b.b = d[2].b;
    return b;
};
