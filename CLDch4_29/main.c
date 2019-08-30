#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3], i, j, *p;
    p =a[0];
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            *(p+3*i+j) = i*3 + j + 1;
        }
    }
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d ", p[i*3 + j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("%d\n", p[0]);
    p = &a[2][2];
    printf("%d\n", *p);
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d ", p[-i*3 - j]);
        }
        printf("\n");
    }
    //printf("Hello world!\n");
    /** 4.30*/
    printf("%d\n", *p);
    // 重新赋值
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            p[-i*3 - j] = 99 -i*3 - j;
        }
    }
    // 逆向输出
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d ", *(p-i*3 - j));
        }
        printf("\n");
    }
    printf("\n");

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++, p--)
        {
            printf("%d ", *p);
        }
        printf("\n");
    }
    ++p;
    printf("%d\n", *p);
    /** 4.31 */
    int (*pa)[3];
    pa = a;
    // 重新赋值
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            *(*(pa+i)+j) = i*3 + j + 1;
        }
    }

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            if (i!=0&&j%3==0)
            {
                printf("\n");
            }
            printf("%d ", *(*(pa+i)+j));
        }
    }
    printf("\n");
    printf("%d, %d, %d\n", *pa[0], *(pa[0]+1), *(pa[0]+2));// output 1st row
    printf("%d, %d, %d\n", *pa[0], *pa[1], *pa[2]);// output 1st column
    printf("%d, %d, %d\n", **pa, *(*pa+1), *(*pa+2));// output 1st row
    printf("%d, %d, %d\n", **pa, **(pa+1), **(pa+2));// output 1st column
    printf("%d, %d, %d\n", *(*(pa+1)), *(*(pa+1)+1), *(*(pa+1)+2));// output 2nd row
    printf("%d, %d, %d\n", *(*pa+1), *(*(pa+1)+1), *(*(pa+2)+1));// output 2nd column
    return 0;
}
