#include <stdio.h>
#include <stdlib.h>
#define Nmax 101

int main()
{
    int a[2][Nmax] = {0}; // 系数数组
    int suma[Nmax] = {0};
    int c[2][Nmax] = {0}; // 幂指数数组
    int sumc[Nmax] = {0};
    int count = 0;
    int j,k;
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
            flag0++;//是否全零指示
        }
        sumc[i] = c[0][i] + c[1][i];
        if (c[0][i] == c[1][i])
        {
            sumc[i] /= 2;
        }
    }
    // show the expression
    if (!flag0)
    {
        printf("%d",0);
    }
    else
    {
        int flag1 = 0;//标记最高项数
        for (int i=Nmax-1; i>=0; i--)
        {
            if(!suma[i])
            {
                continue;//系数为零继续
            }
            if (!flag1)//第一个非零系数
            {
                flag1++;
                if (suma[i]==1)
                {
                    if (sumc[i]==0)
                    {
                        printf("%d",suma[i]);
                    }
                    else if(sumc[i]==1)
                    {
                        printf("x");
                    }
                    else
                    {
                        printf("x%d",sumc[i]);
                    }
                }else if(suma[i]==-1)
                {
                    if (sumc[i]==0)
                    {
                        printf("%d",suma[i]);
                    }
                    else if(sumc[i]==1)
                    {
                        printf("-x");
                    }
                    else
                    {
                        printf("-x%d",sumc[i]);
                    }
                }else
                {
                    if (sumc[i]==0)
                    {
                        printf("%d",suma[i]);
                    }
                    else if (sumc[i]==1)
                    {
                        printf("%dx",suma[i]);
                    }
                    else
                    {
                        printf("%dx%d",suma[i],sumc[i]);
                    }
                }
            }
            else
            {
                if (suma[i]==1)
                {
                    if (sumc[i]==0)
                    {
                        printf("+%d",suma[i]);
                    }
                    else if(sumc[i]==1)
                    {
                        printf("+x");
                    }
                    else
                    {
                        printf("+x%d",sumc[i]);
                    }
                }else if(suma[i]==-1)
                {
                    if (sumc[i]==0)
                    {
                        printf("%+d",suma[i]);
                    }
                    else if(sumc[i]==1)
                    {
                        printf("-x");
                    }
                    else
                    {
                        printf("-x%d",sumc[i]);
                    }
                }else
                {
                    if (sumc[i]==0)
                    {
                        printf("%+d",suma[i]);
                    }
                    else if (sumc[i]==1)
                    {
                        printf("%+dx",suma[i]);
                    }
                    else
                    {
                        printf("%+dx%d",suma[i],sumc[i]);
                    }
                }
            }
        }
    }
    printf("\n");
    return 0;
}
