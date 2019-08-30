#include <stdio.h>
#include <stdlib.h>
/** data �й���ѧMOOC ���ݽṹ 2019��ϰ�⼯
 * PTA-���������ʵ�鸨����ѧƽ̨���㽭��ѧ��
 * P- �����
 * 01 - ��Ŀ���
 * \return
 *
 */
int MaxSubseqSum1(int A[], int N);
int MaxSubseqSum2(int A[], int N);
int Max3( int A, int B, int C );
int DivideAndConquer( int List[], int left, int right );
int MaxSubseqSum3(int A[], int N);
int MaxSubseqSum4(int A[], int N);
int main()
{
    int A[] = {4, -3, 5, -2, -1, 2, 6, -2};
    int N = 8;
    printf("The 1st max subSeqence sum is: %d.\n", MaxSubseqSum1(A, N));
    printf("The 2nd max subSeqence sum is: %d.\n", MaxSubseqSum2(A, N));
    printf("The 3nd max subSeqence sum is: %d.\n", MaxSubseqSum3(A, N));
    printf("The 4th max subSeqence sum is: %d.\n", MaxSubseqSum4(A, N));

    return 0;
}
int MaxSubseqSum1(int A[], int N)
{
    int ThisSum, MaxSum = 0;
    int i, j, k;
    for (i = 0; i < N; i++)
    {
        for (j = i; j < N; j++)
        {
            ThisSum = 0;
            for (k = i; k <= j; k++)
            {
                ThisSum += A[k];
            }
            if (ThisSum > MaxSum)
            {
                MaxSum = ThisSum;
            }
        }

    }
    return MaxSum;
}
int MaxSubseqSum2(int A[], int N)
{
    int ThisSum, MaxSum = 0;
    int i, j;
    for (i = 0; i< N; i++)
    {
        ThisSum = 0;
        for (j = i; j < N; j++)
        {
            ThisSum += A[j];
            if (ThisSum > MaxSum)
            {
                MaxSum = ThisSum;
            }
        }
    }
    return MaxSum;
}
/** �ֶ���֮ */
int MaxSubseqSum3(int A[], int N)
{
/** ������ǰ2���㷨��ͬ�ĺ����ӿ� */
    return DivideAndConquer( A, 0, N-1 );
}
int Max3( int A, int B, int C )
{ /** ����3�������е����ֵ */
    return A > B ? A > C ? A : C : B > C ? B : C;
}

int DivideAndConquer( int List[], int left, int right )
{ /** ���η���List[left]��List[right]��������к� */
    int MaxLeftSum, MaxRightSum; /** �������������Ľ� */
    int MaxLeftBorderSum, MaxRightBorderSum; /**��ſ�ֽ��ߵĽ��*/

    int LeftBorderSum, RightBorderSum;
    int center, i;

    if( left == right )  { /** �ݹ����ֹ����������ֻ��1������ */
        if( List[left] > 0 )  return List[left];
        else return 0;
    }

    /** ������"��"�Ĺ��� */
    center = ( left + right ) / 2; /* �ҵ��зֵ� */
    /** �ݹ�����������е����� */
    MaxLeftSum = DivideAndConquer( List, left, center );
    MaxRightSum = DivideAndConquer( List, center+1, right );

    /** �������ֽ��ߵ�������к� */
    MaxLeftBorderSum = 0; LeftBorderSum = 0;
    for( i=center; i>=left; i-- ) { /* ����������ɨ�� */
        LeftBorderSum += List[i];
        if( LeftBorderSum > MaxLeftBorderSum )
            MaxLeftBorderSum = LeftBorderSum;
    } /** ���ɨ����� */

    MaxRightBorderSum = 0; RightBorderSum = 0;
    for( i=center+1; i<=right; i++ ) { /* ����������ɨ�� */
        RightBorderSum += List[i];
        if( RightBorderSum > MaxRightBorderSum )
            MaxRightBorderSum = RightBorderSum;
    } /**�ұ�ɨ����� */

    /** ���淵��"��"�Ľ�� */
    return Max3( MaxLeftSum, MaxRightSum, MaxLeftBorderSum + MaxRightBorderSum );
}
/** ���ߴ��� */
int MaxSubseqSum4(int A[], int N)
{
    int ThisSum, MaxSum;
    int i;
    ThisSum = MaxSum = 0;
    for (i = 0; i < N; i++)
    {
        ThisSum += A[i];
        if (ThisSum > MaxSum)
            MaxSum = ThisSum;
        else if (ThisSum < 0)
            ThisSum = 0;
    }
    return MaxSum;
}
