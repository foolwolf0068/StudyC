#include <stdio.h>
#include <stdlib.h>
/** \brief 字符数组
 *
 * \param
 * \param
 * \return
 *
 */
#define MAXLINE 1000 // 允许的输入行的最大长度
int getline(char line[], int maxline);
void copy(char to[], char from[]);
/** \brief strlen函数：返回s的长度
 */
int strlen(char s[]);
/** squeeze 函数： 从字符串s中删除字符c
*/
void str2cat(char s[], char t[]);
int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0)
    {
        printf("%s", longest);
    }
    //printf("Hello world!\n");
    return 0;
}
/** \brief getline函数：将一行读入s中并返回其长度
 */
int getline(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
    {
        s[i] = c;
    }
    if (c == '\n')
    {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}
/** \brief copy函数：将from复制到to，这里假定to足够大
 */
void copy(char to[], char from[])
{
    int i = 0;
    //i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        i++;
    }
}
/** \brief strlen函数：返回s的长度
 */
int strlen(char s[])
 {
     int i = 0;
     while (s[i] != '\0')
     {
         i++;
     }
     return i;
 }
/** squeeze 函数： 从字符串s中删除字符c
*/
void squeeze(char s[], int c)
{
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++)
    {
        if (s[i] != c)
        {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}
/** squeeze 函数： 从字符串s中删除字符c
*/
void str2cat(char s[], char t[])
{
    int i, j;
    i = j = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    while ((s[i++] = t[j++]) != '\0')
    {
        ;
    }
}
