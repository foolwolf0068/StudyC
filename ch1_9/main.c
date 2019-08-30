#include <stdio.h>
#include <stdlib.h>
/** \brief �ַ�����
 *
 * \param
 * \param
 * \return
 *
 */
#define MAXLINE 1000 // ����������е���󳤶�
int getline(char line[], int maxline);
void copy(char to[], char from[]);
/** \brief strlen����������s�ĳ���
 */
int strlen(char s[]);
/** squeeze ������ ���ַ���s��ɾ���ַ�c
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
/** \brief getline��������һ�ж���s�в������䳤��
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
/** \brief copy��������from���Ƶ�to������ٶ�to�㹻��
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
/** \brief strlen����������s�ĳ���
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
/** squeeze ������ ���ַ���s��ɾ���ַ�c
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
/** squeeze ������ ���ַ���s��ɾ���ַ�c
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
