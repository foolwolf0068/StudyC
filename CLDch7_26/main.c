#include <stdio.h>
#include <stdlib.h>
int step = 1;
void move(int, char, char, char);
int main()
{
    //printf("Hello world!\n");
    int n;
    printf("������������: n = ");
    scanf("%d", &n);
    printf("��3���������ƶ�%dֻ���ӵĲ���Ϊ��\n", n);
    move(n, 'a', 'b', 'c');
    return 0;
}
void move(int m, char p, char q, char r)
{
    if(m==1)
    {
        printf("[%d] move 1# from %c to %c\n", step, p, r);
        step++;
    }
    else
    {
        move(m-1, p, r, q);
        printf("[%d] move %d# from %c to %c\n", step, m, p, r);
        step++;
        move(m-1, q, p, r);
    }
}
