#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char password[8] = "secret", input[8];

    while(1)
    {
        printf("Enter your password:");
        //gets(input);// scanf("%s", input);�������������ʵ��
        //scanf("%7s", input); // �ַ�����ȫ����ģʽ
        // fgets
        int i;
        fgets(input, sizeof(input), stdin);
        for (i=0;input[i]!='\n';i++){;}
        input[i] = '\0';
        if(strcmp(input, password) == 0)
        {
            printf("Welcome!\n");
            break;
        }
        else
        {
            printf("Sorry!\n");
        }
    }

    return 0;
}
