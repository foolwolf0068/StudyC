#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*��Ŀ���ݣ�

�Ӽ�������һ���ַ��������ַ�������8�������Իس���ʾ�����������̽����е����ֲ���ת��Ϊ�������������͵���ʽ�����

����ԭ��Ϊ int Myatoi(char str[]);

���У��β�����str[]��Ӧ�û�������ַ�������������ֵΪת�������������

����˼·�Ĺؼ��ǣ�1���ж��ַ����е��ַ��Ƿ��������ַ���2����ν������ַ�ת��Ϊ���Ӧ������ֵ��3����ν�ÿһ��ת���������ֵ�������γ�һ����������*/
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
