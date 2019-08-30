#include <stdio.h>
#include <stdlib.h>

int Count_Digit ( const int N, const int D );

int main()
{
    int N, D;

    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}

/* 你的代码将被嵌在这里 */
int Count_Digit ( const int N, const int D )
{

    int i=0,r=10, q=N;
    if (N<0)  q = -q;
        int a[r];
        if (!q)
        {
            a[0]=q;
        }
        else
        {
            while(q&&(i<r))
            {
                a[i] = q % 10;
                q /= 10;
                i++;
            }
            i -= 1;
        }
        int count1=0;
        for (int j=0;j<=i;j++)
        {
            if (D == a[j]) count1++;
        }
        return count1;
}
