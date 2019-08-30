#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i =0, j = 0;
    char t[] = "abcdefghij", s[] = "klmnopqrstuvwxyz";
    char *p;
    if ((p=(char *)malloc(strlen(t)+strlen(s)+8)) == NULL)
    {
        printf("ÄÚ´æ·ÖÅä´íÎó£¡\n");
        exit(1);
    }
    while ((p[i] = t[i]) != '\0')
    {
        i++;
    }
    while ((p[i+j] = s[j]) != '\0')
    {
        j++;
    }
    p[i+j] = '\0';
    printf("\n");
    printf("%s\n", p);
    for (i=25; i>-1; i--)
    {
        printf("%c", p[i]);
    }
    printf("\n");
    p = p + 25;
    for (i=0; i>-26; i--)
    {
        printf("%c", p[i]);
    }
    printf("\n");
    p = p - 25;
    free(p);
    //printf("Hello world!\n");
    return 0;
}
