#include <stdio.h>
#include <stdlib.h>

int main()
{
    /** 3.15*/
    int i, nother;
    char c;
    int ndigit[10], nlchar[26], nuchar[26];
    nother = 0;
    for (i=0; i<10; i++)
    {
        ndigit[i] = 0;
    }
    for (i=0; i<26; i++)\
    {
        nlchar[i] = 0;
        nuchar[i] = 0;
    }
    while ((c = getchar()) != '\n')
    {
        if (c>='0' && c<='9')
        {
            ++ndigit[c-'0'];
        }else if (c>='a' && c<='z')
        {
            ++nlchar[c-'a'];
        }else if (c>='A' && c<='Z')
        {
            ++nuchar[c-'A'];
        }else
        {
            nother++;
        }
    }
    printf("digit = ");
    for (i=0; i<10; i++)
    {
        printf("%d ", ndigit[i]);
    }
    printf("\nThe lower characters = ");
    for (i=0; i<26; i++)
    {
        printf("%d ", nlchar[i]);
    }
    printf("\nThe upper characters = ");
    for (i=0; i<26; i++)
    {
        printf("%d ", nuchar[i]);
    }
    printf("\n Others = %d\n", nother);
    /** 3.17 */
    int fish[6] ={1, 1, 1, 1, 1, 1};
    do
    {
        fish[5] = fish[5] + 5;
        for (i=4; i>=1; i--)\
        {
            if (fish[i+1]%4!=0)
            {
                break;
            }else
            {
                fish[i] = fish[i+1] * 5 / 4 + 1;
            }
        }
    }while (i>=1);
    for (i=1; i<=5; i++)
    {
        printf("第%d个人看到的鱼有%d条。\n", i, fish[i]);
    }
    return 0;
}
