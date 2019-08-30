#include <stdio.h>
#include <stdlib.h>
union data{
    int a;
    int b;
} ab;
union data Give(union data a)
{
    a.a = 78;
    return a;
};
void GiveIt(union data *p)
{
    p->b = 7887;
}
int main()
{
    printf("Hello world!\n");
    ab = Give(ab);
    printf("%d\n", ab.b);
    GiveIt(&ab);
    printf("%d\n", ab.a);
    return 0;
}
