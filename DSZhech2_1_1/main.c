#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100
#define ERROR -1
typedef int ElementType;
typedef int Position;
typedef enum Status{false, true} Bool;
typedef struct LNode *List;
struct LNode
{
    ElementType Data[MAXSIZE];
    Position Last;
};
List MakeEmpty();
Position Find(List L, ElementType X);
Bool insert(List L, ElementType X, Position P);
int main()
{
    printf("Hello world!\n");
    return 0;
}
List MakeEmpty()
{
    List L;
    L = (List)malloc(sizeof(struct LNode));
    L->Last = -1;
    return L;
}
Position Find(List L, ElementType X)
{
    Position i = 0;
    while(i<=L->Last && L->Data[i] != X)
    {
        i++;
    }
    if(i>L->Last)
    {
        return ERROR;
    }
    else
    {
        return i;
    }
}
Bool insert(List L, ElementType X, Position P)
{
    Position i;
    if(L->Last == MAXSIZE)
    {
        printf("表满！\n");
        return false;
    }
    if(P<0 || P>L->Last)
    {
        printf("位置不合法！\n");
        return false;
    }
    for(i=L->Last; i>=P; i--)
    {
        L->Data[i+1] = L->Data[i];
    }
    L->Data[P] = X;
    L->Last++;
    return true;
}
Bool Delete(List L, Position P)
{
    Position i;
    if(P<0 || P>L->Last)
    {
        printf("位置不合法！\n");
        return false;
    }
    for(i=P+1; i<=L->Last; i++)
    {
        L->Data[i-1] = L->Data[i];
    }
    L->Last--;
    return true;
}
