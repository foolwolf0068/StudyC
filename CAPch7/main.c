#include <stdio.h>
#include <stdlib.h>
#define Nmax 101

void dispPoly(int suma[], int sumc[], int n, int flag0);
int main()
{
    int a[2][Nmax] = {0}; // 系数指针
    int suma[Nmax] = {0};
    int c[2][Nmax] = {0}; // 幂指数数组
    int sumc[Nmax] = {0};
    int count = 0;
    int j=1,k;
    printf("%+d\n",j);
    while (count<2)
    {
        scanf("%d %d",&j,&k);
        c[count][j] = j;
        a[count][j] = k;
        if (j==0)
        {
            count++;
        }
    }
    int flag0 = 0;
    for (int i=0;i<Nmax;i++)
    {
        suma[i] = a[0][i] + a[1][i];
        if (suma[i])
        {
            flag0++;
        }
        sumc[i] = c[0][i] + c[1][i];
        if (c[0][i] == c[1][i])
        {
            sumc[i] /= 2;
        }
    }
    //dispPoly(suma, sumc, Nmax, flag0);
    /*
    if (!flag0)
    {
        printf("%d",flag0);
    }
    else
    {
    int flag = 0;
    for (int i=Nmax-1;i>=0;i--)
    {
        if (!suma[i])
        {
            continue;
        }
        else
        {
            if(!flag)
            {
                if (!sumc[i])
                {
                    printf("%d",suma[i]);
                }else if(sumc[i]==1)
                {
                    printf("x");
                }
                else
                {
                    if (suma[i]==1)
                    {
                        printf("x%d",sumc[i]);
                    }
                    else
                    {
                        printf("%dx%d",suma[i],sumc[i]);
                    }
                }
                flag++;
            }
            else
            {
                if (!sumc[i])
                {
                    printf("+%d",suma[i]);
                }else if(sumc[i]==1)
                {
                    if (suma[i]==1)
                    {
                        printf("+x");
                    }
                    else
                    {
                        printf("+%dx",suma[i]);
                    }
                }
                else
                {
                    if (suma[i]==1)
                    {
                        printf("+x%d",sumc[i]);
                    }
                    else
                    {
                        printf("+%dx%d",suma[i],sumc[i]);
                    }
                }
            }
        }
    }
    }*/
    return 0;
}
void dispPoly(int suma[], int sumc[], int n, int flag0)
{
    if (!flag0)
    {
        printf("%d",flag0);
    }
    else
    {
        int flag = 0;
        for (int i=Nmax-1;i>=0;i--)
        {
            if (!suma[i])
            {
                continue;
            }
            else
            {
                if(!flag)
                {
                    if (!sumc[i])
                    {
                        printf("%d",suma[i]);
                    }else if(sumc[i]==1)
                    {
                        printf("x");
                    }
                    else
                    {
                        if (suma[i]==1)
                        {
                            printf("x%d",sumc[i]);
                        }
                        else
                        {
                            printf("%dx%d",suma[i],sumc[i]);
                        }
                    }
                    flag++;
                }
                else
                {
                    if (!sumc[i])
                    {
                        printf("+%d",suma[i]);
                    }else if(sumc[i]==1)
                    {
                        if (suma[i]==1)
                        {
                            printf("+x");
                        }
                        else
                        {
                            printf("+%dx",suma[i]);
                        }
                    }
                    else
                    {
                        if (suma[i]==1)
                        {
                            printf("+x%d",sumc[i]);
                        }
                        else
                        {
                            printf("+%dx%d",suma[i],sumc[i]);
                        }
                    }
                }
            }
        }
    }
}
