#include <stdio.h>
#include <stdlib.h>
/** data �й���ѧMOOC ���ݽṹ 2019��ϰ�⼯
 * PTA-���������ʵ�鸨����ѧƽ̨���㽭��ѧ��
 * F- ������
 * 01 - ��Ŀ���
 * \return
 *
 */

#define MAXSIZE 10
#define NotFound 0
typedef int ElementType;
typedef int Position;
typedef struct LNode *List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; /* �������Ա������һ��Ԫ�ص�λ�� */
};

List ReadInput(); /* ����ʵ�֣�ϸ�ڲ�����Ԫ�ش��±�1��ʼ�洢 */
Position BinarySearch( List L, ElementType X );

int main()
{
    List L;
    ElementType X;
    Position P;

    L = ReadInput();
    scanf("%d", &X);
    P = BinarySearch( L, X );
    printf("%d\n", P);

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
Position BinarySearch( List L, ElementType X )
{
    Position high,low,mid;
    low = 1;
    high = L->Last;
    while (low<=high)
    {
        mid = high + (high - low)/2;
        if (L->Data[mid]<X)
        {
            low = mid + 1;
        }else if (L->Data[mid]>X)
        {
            high = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return NotFound;
}