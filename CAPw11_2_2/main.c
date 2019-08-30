#include <stdio.h>
#include <stdlib.h>
struct point{
    int x;
    int y;
};
void getStruct(struct point);
void output(struct point);
int main()
{
    struct point y = {0, 1};
    getStruct(y);
    printf("Hello world!\n");
    output(y);
    return 0;
}
void getStruct(struct point P)
{
    scanf("%d", &P.x);
    scanf("%d", &P.y);
    printf("%d, %d\n", P.x, P.y);
}
void output(struct point P)
{
    printf("%d, %d\n", P.x, P.y);
}
