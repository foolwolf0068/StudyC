#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int answer(int, int);
int main()
{
   // printf("Hello world!\n");
    int n = 0;
    int num;
    int A;
    srand((unsigned int)time(NULL));
    A = rand()%100 + 1;
    printf("��Ŀ��1��100֮�䣬���ܲµ������԰ɣ�\n");
    do
    {
        n++;
        printf("���������\n");
        scanf("%d", &num);
    }while(answer(num, A) != 0);
    return 0;
}
int answer(int num, int A)
{
    if(num==A)
    {
        printf("Very good!\n");
        return 0;
    }
    else if(num < A)
    {
        printf("Your guess is lower! Guess again...\n");
        return 1;
    }
    else
    {
        printf("Your guess is higher!Guess again...\n");
        return 2;
    }
}
