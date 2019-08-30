#include <stdio.h>
#include <stdlib.h>
struct list{
    char c;
    int num;
    char name[12];
    float fnum[2];
    } a;
void disp(void);
int main()
{
    printf("Hello world!\n");
    disp();
    return 0;
}
void disp()
{
    printf("Please input a char: ");
    scanf("%c", &a.c);

    printf("Please input a number: ");
    scanf("%d", &a.num);

    printf("Please input a string: ");
    scanf("%s", a.name);

    {
        int i=0;
        printf("Please enter two float number: ");
        for(i=0; i<2; i++)
        {
            scanf("%f", (a.fnum+i));
        }
        printf("%c, %d, %s, %f, %f\n", a.c, a.num, a.name, a.fnum[0], a.fnum[1]);
        printf("%c, %d, %s, %f, %f\n", a.c, a.num, &a.name[4], *(a.fnum), *(a.fnum + 1));
    }
}
