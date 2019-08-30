#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef struct
{
    char suit[10]; //花色
    char face[10]; //牌面
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
    FillCard(card); // 将牌面和花色顺序存放与结构体数组card
    printf("...Before Shuffling...\n");
    DealCard(card);   // 没有洗牌就发牌
    Initialize(result);//将牌编号顺序存放于数组result
    printf("...After Shuffling...\n");
    ShuffleCard(result);//洗牌
    DealCard2(card, result);//洗牌后发牌
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
// 没有洗牌就发牌
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
