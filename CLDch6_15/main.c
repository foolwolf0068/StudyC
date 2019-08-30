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
    printf("调用前：a = %d, b = %d\n", d.a, d.b);
    swap(&d);
    printf("返回后：a = %d, b = %d\n", d.a, d.b);
    return 0;
}
struct LIST *swap(struct LIST *s)
{
    int temp = s->a;
    s->a = s->b;
    s->b = temp;
    printf("函数中：a = %d, b = %d\n", s->a, s->b);
    return s;
}
