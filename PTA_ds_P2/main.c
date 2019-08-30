#include <stdio.h>
#include <stdlib.h>

/** CSDN上的优秀代码 */

void main2();
#define Nmax 100001
void MaxSubseqSumOl(int a[], int n, int sumIndex[], int n1);
int main()
{
    int N = 0;
    scanf(" %d", &N);
    int a[Nmax] = {0};
    int i = 0;
    while (i<N)
    {
        scanf("%d",&a[i]);
        i++;
    }
    int sumIndex[3] = {0};
    MaxSubseqSumOl(a, N, sumIndex, 3);
    printf("%d %d %d\n", sumIndex[0], sumIndex[1], sumIndex[2]);
    return 0;
}
void MaxSubseqSumOl(int a[], int n, int sumIndex[], int n1)
{
    int thisSum, maxSum;
    int i;
    thisSum = 0;
    maxSum = 0;
    int index1 = 0, index2 = 0, flag = 0;
    int count0 = 0;
    int count1 = 0;
    for (i = 0; i< n; i++)
    {
        thisSum += a[i];
        if (thisSum>maxSum)
        {
            if (!flag)
            {
                index1 = i;
                flag++;
            }
            index2 = i;
            maxSum = thisSum;
        }
        else if (thisSum < 0)
        {
            count0++;
            thisSum = 0;
        }
        if (a[i]<=0)
        {
            count1++;
        }
    }
    sumIndex[0] = maxSum;

    if (count1==n)
    {
        int flag1 = 0,flag2 = 0;
        i = 0;
        while (i<n)
        {
            if (a[i]==0)
            {
                if (!flag1)
                {
                    index1 = i;
                    index2 = i;
                    flag1++;
                }
                else
                {
                    index2++;
                }
                flag2++;
            }
            else if(a[i]<0&&flag2)
            {
                break;
            }
            i++;
        }
    }
    else
    {
        i = index2+1;
        while (i<n)
        {
            if (a[i] == 0)
            {
                index2++;
            }
            else if (a[i]<0)
            {
                break;
            }
            i++;
        }
        i = index1 - 1;
        while (i>=0)
        {
            if (a[i] == 0)
            {
                index1--;
            }
            else if (a[i]<0)
            {
                break;
            }
            i--;
        }
    }

    if (count0==n)
    {
        sumIndex[1] = a[0];
        sumIndex[2] = a[n-1];
    }else
    {
        sumIndex[1] = a[index1];
        sumIndex[2] = a[index2];
    }
    printf("index1 = %d, index2 = %d\n", index1, index2);
   // return maxSum;
}
/** CSDN上的优秀代码 */

void main2(){
    int arr[10010];
    int n, ThisSum=0, MaxSum=-1, Minindex=0, Maxindex=0, Tempindex=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        ThisSum += arr[i];
        if(ThisSum>MaxSum)
        {
            MaxSum=ThisSum;
            Maxindex=i;
            Minindex=Tempindex;
        }
        if(ThisSum<0)
        {
            ThisSum=0;
            Tempindex=i+1;
        }
    }
    if(MaxSum<0){printf("0 %d %d", arr[0], arr[n-1]);}
    else{printf("%d %d %d", MaxSum, arr[Minindex], arr[Maxindex]);}
    //return 0;
}
