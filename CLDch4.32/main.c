#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[3][20];
    char string[20];
    int i;
    for (i=0; i<3; i++)
    {
        printf("\n输入字符串%d: ", i);
        gets(str[i]);
    }
    if(strcmp(str[0], str[1]) > 0)
    {
        strcpy(string, str[0]);
    }
    else
    {
        strcpy(string, str[1]);
    }
    if (strcmp(str[2], string)>0)
    {
        strcpy(string, str[2]);
    }
    printf("最大的字符串是: %s。\n", string);
    return 0;
}
