#include <stdio.h>
#include <stdlib.h>
struct pen{
    int i;
    double j;
};
void count(struct pen *);
int main()
{
    printf("Hello world!\n");
    static struct pen d = {5, 8.26};
    count(&d);
    return 0;
}
void count(struct pen *s)
{
    double x;
    x = s->j * s->i;
    printf("x = %f \n", x);
}
