#include <stdio.h>
#include <stdlib.h>
struct LIST{
    int a;
    int b;
}d = {3 ,8};
struct LIST *swap(struct LIST* );
int main()
{
    printf("Hello world!\n");
    printf("����ǰ��a = %d, b = %d\n", d.a, d.b);
    swap(&d);
    printf("���غ�a = %d, b = %d\n", d.a, d.b);
    return 0;
}
struct LIST *swap(struct LIST *s)
{
    int temp = s->a;
    s->a = s->b;
    s->b = temp;
    printf("�����У�a = %d, b = %d\n", s->a, s->b);
    return s;
}
