#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Find(char lake[][50]);
int main()
{
    //printf("Hello world!\n");
    int i;
    char lake[5][50];
    Find(lake);
    for(i=1;i<=4;i++)
    {
        printf("%d %s\n", i, lake[i]);
    }
    printf("\n");
    return 0;
}
void Find(char lake[5][50])
{
    int As, Bs, Cs, Ds;
    int Dongting, Hongze, Poyang, Tai;

    for(Dongting=1; Dongting<=4; Dongting++)
    {
        for(Hongze=1; Hongze<=4; Hongze++)
        {
            if(Hongze == Dongting)
            {
                continue;
            }
            for(Poyang=1; Poyang<=4; Poyang++)
            {
                if(Poyang==Hongze || Hongze==Dongting)
                {
                    continue;
                }
                Tai = 10 - Hongze - Dongting - Poyang;
                As = (Dongting==1) + (Hongze==4) + (Poyang==3);
                Bs = (Hongze==1) + (Dongting==4) + (Poyang==2) + (Tai==3);
                Cs = (Hongze==4) + (Dongting==3);
                Ds = (Poyang==1) + (Tai==4) + (Hongze==2) + (Dongting==3);
                if(As==1 && Bs==1 && Cs==1 && Ds==1)
                {
                    strcpy(lake[Dongting], "¶´Í¥ºþ");
                    strcpy(lake[Hongze], "ºéÔóºþ");
                    strcpy(lake[Poyang], "Û¶Ñôºþ");
                    strcpy(lake[Tai], "Ì«ºþ");
                }
            }
        }
    }
}
