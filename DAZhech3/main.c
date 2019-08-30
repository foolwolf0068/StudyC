#include <stdio.h>
#include <stdlib.h>
typedef int ElementType;
typedef struct TreeNode *BinTree;
typedef BinTree Position;
struct TreeNode
{
    ElementType Data;
    BinTree Left;
    BinTree Right;
};
void PreOrderTraversal( BinTree BT);
void InOrderTraversal( BinTree BT);
void PostOrderTraversal( BinTree BT);
int main()
{
    printf("Hello world!\n");
    return 0;
}
void PreOrderTraversal( BinTree BT)
{
    if(BT)
    {
        printf("%d", BT->Data);
        PreOrderTraversal(BT->Left);
        PreOrderTraversal(BT->Right);
    }
}
void InOrderTraversal( BinTree BT)
{
    if(BT)
    {
        InOrderTraversal(BT->Left);
        printf("%d", BT->Data);
        InOrderTraversal(BT->Right);
    }
}
void PostOrderTraversal( BinTree BT)
{
    if(BT)
    {
        PostOrderTraversal(BT->Left);
        PostOrderTraversal(BT->Right);
        printf("%d", BT->Data);
    }
}
