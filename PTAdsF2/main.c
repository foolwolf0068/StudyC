#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read(); /* 细节在此不表 */
void Print( List L ); /* 细节在此不表；空链表将输出NULL */

List Merge( List L1, List L2 );

int main()
{
    List L1, L2, L;
    L1 = Read();
    L2 = Read();
    L = Merge(L1, L2);
    Print(L);
    Print(L1);
    Print(L2);
    return 0;
}

/* 你的代码将被嵌在这里 */
List Merge( List L1, List L2 )
{
    List pa,pb,pc,L;
    L = (List)malloc(sizeof(struct Node));
    pa=L1->Next;
    pb=L2->Next;
    pc = L;
    while(pa && pb)
    {
        if(pa->Data <= pb->Data)
        {
            pc->Next = pa;
            pc = pa;
            pa = pa->Next;
        }
        else
        {
            pc->Next = pb;
            pc = pb;
            pb = pb->Next;
        }
    }
    pc->Next = pa ? pa : pb;
    L1->Next = NULL;
    L2->Next = NULL;
    return L;
}
/*
void Attach(ElementType X, List *pRear);
List Merge( List L1, List L2 )
{
    List P1, P2, P, temp;
    P1 = L1;
    P2 = L2;

    if (L1==NULL&&L2==NULL){return NULL;}
    if (L1==NULL){return L2;}
    if (L2==NULL){return L1;}
    P = (List)malloc(sizeof(struct Node));
    temp = P;
    while(P1 && P2)
    {
        if(P1->Data >= P2->Data)
        {
            //Attach(P1->Data, &P);
            temp->Data = P1->Data;
            P1 = P1->Next;
        }
        else
        {
            //Attach(P2->Data, &P);
            temp->Data = P2->Data;
            P2 = P2->Next;
        }
        temp->Next = NULL;
        P->Next = temp;
        P = P->Next;
    }
    for(;P1;P1=P1->Next,P=P->Next){temp->Data = P1->Data;P->Next = temp;}
    for(;P2;P2=P2->Next,P->Next = P){P->Data = P2->Data;P->Next = temp;}
    P->Next = NULL;
    temp = P;
    P = P->Next;
    free(temp);
    return P;
}
void Attach(ElementType X, List *pRear)
{
    List Ps;
    Ps = (List)malloc(sizeof(struct Node));
    Ps->Data = X;
    Ps->Next= NULL;
    (*pRear)->Next = Ps;
    *pRear = Ps;
}
*/
