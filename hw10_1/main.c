#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*题目内容：

从键盘输入一串字符（假设字符数少于8个），以回车表示输入结束，编程将其中的数字部分转换为整型数并以整型的形式输出。

函数原型为 int Myatoi(char str[]);

其中，形参数组str[]对应用户输入的字符串，函数返回值为转换后的整型数。

解题思路的关键是：1）判断字符串中的字符是否是数字字符；2）如何将数字字符转换为其对应的数字值；3）如何将每一个转换后的数字值加起来形成一个整型数。*/
int Myatoi(char str[]);
int main()
{
    char str[8];
    printf("Input a string:");
    scanf("%7s",str);
    //printf("%s\n",str);
    printf("%d\n",Myatoi(str));
    return 0;
}
int Myatoi(char str[])
{
    int len = strlen(str);
    int num=0;
    for (int i=0; i<len; i++)
    {
        if (str[i]-'0' >=0 && str[i]-'0' <=9 )
        {
            num = num*10+(str[i]-'0');
        }
    }
    return num;
}
