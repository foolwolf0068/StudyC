#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
typedef int ElementType;
struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

List MakeEmpty(List L);
int IsEmpty(List L);
int IsLast(Position P, List L);
Position Find(ElementType X, List L);


#endif // LIST_H_INCLUDED
struct Node
{
    ElementType Element;
    Position Next;
};
