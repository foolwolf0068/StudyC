#include <stdio.h>
#include <stdlib.h>
enum {OUT = 0, IN = 1};

int get_input(char c)
{
    if((c>='a' && c<='z')||(c>='A' && c<='Z'))
    {
        return IN;
    }
    return OUT;
}
int main()
{
    int words = 0, state = OUT, input = OUT;
    char c;
    while((c = getchar()) != '#')
    {
        input = get_input(c);
        if((state==OUT)&&(input==OUT))
        {
            state = OUT;
        }
        else if ((state==OUT)&&(input==IN))
        {
            state = IN;
            words++;
        }
        else if((state==IN) && (input==OUT))
        {
            state = OUT;
        }
        if((state==IN)&&(input==IN))
        {
            state = IN;
        }
    }
    printf("word count: %d\n", words);
    //printf("Hello world!\n");
    return 0;
}
