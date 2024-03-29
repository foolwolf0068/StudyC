#include <stdio.h>
#include <stdlib.h>
/** data 中国大学MOOC 数据结构 2019夏习题集
 * PTA-程序设计类实验辅助教学平台（浙江大学）
 * F- 函数题
 * 01 - 题目编号
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
    Position Last; /* 保存线性表中最后一个元素的位置 */
};

List ReadInput(); /* 裁判实现，细节不表。元素从下标1开始存储 */
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

/* 你的代码将被嵌在这里 */
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
