#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}ListNode;
typedef ListNode * LinkList;
LinkList InitRing(int n, LinkList R);
LinkList DeleteDeath(int n, int k, LinkList R);
void OutRing(int n, LinkList R);
int main()
{
   // printf("Hello world!\n");
    LinkList R = NULL;
    int n, k;
    printf("The total number: n = ");
    scanf("%d", &n);
    printf("The up count number: k = ");
    scanf("%d", &k);
    R = InitRing(n, R);
    printf("The out List as bellows:\n");
    R = DeleteDeath(n, k, R);
    printf("The survivals are:\n");
    OutRing(n, R);

    return 0;
}
LinkList InitRing(int n, LinkList R)
{
    int i;
    ListNode *p, *q;
    R = q = (ListNode *)malloc(sizeof(ListNode));
    if(R==NULL)
    {
        printf("The RAM error...");
        exit(1);
    }
    for(i=1; i<n; i++)
    {
        p = (ListNode *)malloc(sizeof(ListNode));
        if(p==NULL)
        {
            printf("The RAM error...");
            exit(1);
        }
        q->data = i;
        q->next = p;
        q = p;
    }
    p->data = n;
    p->next = R;
    R = p;
    return R;
}
LinkList DeleteDeath(int n, int k, LinkList R)
{
    int i, j;
    ListNode *p, *q;
    p = R;
    for(i=1; i<=n/2; i++)
    {
        for(j=1; j<=k-1; j++)
        {
            p = p->next;
        }
        q = p->next;
        p->next = q->next;
        printf("%4d", q->data);
        if(i%5==0)
        {
            printf("\n");
        }
        free(q);
    }
    printf("\n");
    R = p;
    return R;
}

void OutRing(int n, LinkList R)
{
    int i;
    ListNode *p;
    p = R;
    if(n%2==0)
    {
        n /= 2;
    }
    else
    {
        n = n/2+1;
    }
    for(i=1; i<=n; i++, p = p->next)
    {
        printf("%4d", p->data);
        if(i%5==0)
        {
            printf("\n");
        }
    }
    printf("\n");
}
