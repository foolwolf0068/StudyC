#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// �㽭��ѧPTA���������Ŀ��
int IsTheNumber ( const int N );

int main()
{
    int n1, n2, i, cnt;

    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ ) {
        if ( IsTheNumber(i) )
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int IsTheNumber ( const int N )
{

    if ((sqrt(N)-(int)(sqrt(N)))<1e-6)
    {
        //printf("%f\n",((int)(sqrt(N))-sqrt(N)));
        int i=0,r=10, q=N;
        int a[r];
        while(q&&(i<r))
        {
            a[i] = q % 10;
            q /= 10;
            i++;
        }
        i -= 1;
        int count1=0;
        //for(int i1=0;i1<=i;i1++) printf("%d\n",a[i1]);
        //printf("%d\n",N);
        for(int j=0;j<=i;j++)
        {
            for(int k=j+1; k<=i; k++)
            {
                if (a[j]==a[k]){count1++;}
            }
        }
        if (count1)
            {
                //printf("%d\n",N);
                return 1;
            }
            else
            {
                return 0;
            }
    }
    else
    {
        return 0;
    }
}
