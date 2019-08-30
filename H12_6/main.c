#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef struct
{
    char suit[10]; //��ɫ
    char face[10]; //����
}CARD;
void FillCard(CARD card[]);
void DealCard(CARD card[]);
void Initialize(int result[]);
void DealCard2(CARD card[], int result[]);
void ShuffleCard(int result[]);
int main()
{

    CARD card[52];
    int result[52];
    FillCard(card); // ������ͻ�ɫ˳������ṹ������card
    printf("...Before Shuffling...\n");
    DealCard(card);   // û��ϴ�ƾͷ���
    Initialize(result);//���Ʊ��˳����������result
    printf("...After Shuffling...\n");
    ShuffleCard(result);//ϴ��
    DealCard2(card, result);//ϴ�ƺ���
    printf("Complete!\n");
    return 0;
}
void FillCard(CARD card[])
{
    char *pSuit[] = {"Spades","Hearts","Clubs","Diamonds"};
    char *pFace[] = {"A","2","3","4","5","6","7","8","9","10","Jack","Queen","King"};
    //CARD card[52];
    for (int i=0; i<52; i++)
    {
        strcpy(card[i].suit, pSuit[i/13]);
        strcpy(card[i].face, pFace[i%13]);
    }
}
// û��ϴ�ƾͷ���
void DealCard(CARD card[])
{
    for (int i=0; i<52; i++)
    {
        printf("%10s%7s\n", card[i].suit, card[i].face);
    }
}
void Initialize(int result[])
{
    for (int i=0;i<52;i++)
    {
        result[i] = i;
    }
}
void DealCard2(CARD card[], int result[])
{
    for (int i=0; i<52; i++)
    {
        printf("%10s%7s\n", card[result[i]].suit, card[result[i]].face);
    }
}
void ShuffleCard(int result[])
{
    int i, j, temp;
    srand(time(NULL));
    for (i=0; i<52; i++)
    {
        j = rand() % 52;
        temp = result[i];
        result[i] = result[j];
        result[j] = temp;
    }
}
