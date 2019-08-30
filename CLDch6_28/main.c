#include <stdio.h>
#include <stdlib.h>
void display(char (*str)[20]);
int main()
{
    printf("Hello world!\n");
    char str[3][20];
    int i;
    for(i=0; i<3; i++)
    {
        printf("Please Input the string %d: ", i+1);
        gets(str[i]);
    }
    display(str);
    return 0;
}
void display(char (*str)[20])
{
    int i;
    for(i=0; i<3; i++)
    {
        printf("The String %d: %s\n", i+1, str[i]);
    }
}
