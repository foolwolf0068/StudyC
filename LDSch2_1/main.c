#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Sum, X;
    char Op;
    scanf("%d %c", &Sum, &Op);
    while (Op != '=')
    {
        scanf("%d", &X);
        switch(Op)
        {
        case '+':
            Sum += X;
            break;
        case '-':
            Sum -= X;
            break;
        case '*':
            Sum *= X;
            break;
        case '/':
            if (X == 0)
            {
                printf("��ĸΪ�㣡\n");
                return 0;
            }
            Sum /= X;
            break;
        default:
            printf("�Ƿ����룡\n");
            return 0;
        }
        scanf("%c", &Op);
    }
    printf("%d\n", Sum);
    return 0;
}
