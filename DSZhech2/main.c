/** \brief 线性表的顺序存储
主要函数有
创建空线性表
查找元素
插入元素
删除元素
 *
 * \param
 * \param
 * \return
 *
 */

#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 1000
typedef int ElementType;
typedef struct LNode *List;
struct LNode
{
    ElementType Data[MAXSIZE];
    int Last;
};
struct LNode L;
List PtrL;
List makeEmpty();
int Find(ElementType L, List PtrL);
void Insert(ElementType X, int i, List PtrL);
void Delete(int i, List PtrL);
int main()
{
    printf("Hello world!\n");
    return 0;
}
// 建立空表
List makeEmpty()
{
    List PtrL;
    PtrL = (List)malloc(sizeof(struct LNode));
    PtrL->Last = -1;
    return PtrL;
}
int Find(ElementType X, List PtrL)
{
    int i = 0;
    while(i <= PtrL->Last && PtrL->Data[i] != X)
    {
        i++;
    }
    if (i > PtrL->Last)
    {
        return -1;
    }
    else
    {
        return i;
    }
}
void Insert(ElementType X, int i, List PtrL)
{
    int j;
    if(PtrL->Last == MAXSIZE - 1)
    {
        printf("表满！");
        return;
    }
    if(i<1 || i>PtrL->Last+2)
    {
        printf("插入位置不合法");
        return;
    }
    for(j=PtrL->Last; j>=i-1; j--)
    {
        PtrL->Data[j+1] = PtrL->Data[j];
    }
    PtrL->Data[i-1] = X;
    PtrL->Last++;
    return;
}
void Delete(int i, List PtrL)
{
    int j;
    if(i<0 || i>PtrL->Last+1)
    {
        printf("不存在第%d个要删除的数", i);
        return;
    }
    for(j=i-1; j<PtrL->Last; j++)
    {
        PtrL->Data[j] = PtrL->Data[j+1];
    }
    PtrL->Last--;
    return;
}
