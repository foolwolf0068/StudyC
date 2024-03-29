#include <stdio.h>
#include <stdlib.h>
/** \统计输入的行数、单词数和字符数
 *
 * \param
 * \param
 * \return
 *
 */

#define IN 1
#define OUT 0
int main()
{
    printf("Hello world!\n");
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c=='\n')
        {
            ++nl;
        }
        if (c==' ' || c=='\n' || c=='\t')
        {
            state = OUT;
        }else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
    return 0;
}
