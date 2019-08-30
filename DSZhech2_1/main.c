/** \brief ���Ա����ʽ�洢
��Ҫ������
���������Ա�
����Ԫ��
����Ԫ��
ɾ��Ԫ��
 *
 * \param
 * \param
 * \return
 *
 */

#include <stdio.h>
#include <stdlib.h>
typedef int ElementType;
typedef struct LNode *List;
struct LNode
{
    ElementType Data;
    List Next;
};
struct LNode L;
List PtrL;

int Length(List PtrL);
List FindKth(int K, List PtrL);
List Find(ElementType X, List PtrL);
int main()
{
    printf("Hello world!\n");
    return 0;
}
int Length(List PtrL)
{
    List p = PtrL;
    int j = 0;
    while(p)
    {
        p = p->Next;
        j++;
    }
    return j;
}
List FindKth(int K, List PtrL)
{
    List p = PtrL;
    int i = 1;
    while(p!=NULL && i<K)
    {
        p = p->Next;
        i++;
    }
    if (i==K)
    {
        return p;
    }
    else
    {
        return NULL;
    }
}
List Find(ElementType X, List PtrL)
{
    List p = PtrL;
    while(p != NULL && PtrL->Data != X)
    {
        p = p->Next;
    }
    return p;
}
List Insert(ElementType X, int i, List PtrL)
{
    List p, s;
    if(i==1)
    {
        s = (List)malloc(sizeof(struct LNode));
        s->Data = X;
        s->Next = PtrL;
        return s;
    }
    p = FindKth(i-1, PtrL);
    if(p==NULL)
    {
        printf("����i����");
        return NULL;
    }
    else
    {
        s = (List)malloc(sizeof(struct LNode));
        s->Data = X;
        s->Next = p->Next;
        p->Next = s;
        return PtrL;
    }
}
List Delete(int i, List PtrL)
{
    List p, s;
    if(i==1)
    {
        s = PtrL;
        if(PtrL != NULL)
        {
            PtrL = PtrL->Next;
        }
        else
        {
            return NULL;
        }
        free(s);
        return PtrL;
    }
    p = FindKth(i-1,PtrL);
    if (p==NULL)
    {
        printf("��%d����㲻���ڣ�", i-1);
        return NULL;
    }
    else if(p->Next == NULL)
    {
        printf("��%d����㲻���ڣ�", i);
        return NULL;
    }
    else
    {
        s = p->Next;
        p->Next = s->Next;
        free(s);
        return PtrL;
    }
}
