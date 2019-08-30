#include <stdio.h>
#include <stdlib.h>

#define SIX 6
#define MaxVertexNum 100

typedef unsigned long VertexType;
typedef struct node{
    VertexType AdjV;
    struct node *Next;
}EdgeNode;

// typedef unsigned long VertexType;
typedef struct Vnode{
    char Visited;
    double Percent;
    EdgeNode *FirstEdge;
}VertexNode;


typedef VertexNode AdjList[MaxVertexNum];

typedef struct{
    AdjList adjlist;
    unsigned long int n, e;
 }ALGraph;

 typedef struct Element{
    VertexType v;
    int Layer;
 }QElementType;

 typedef struct Node{
    QElementType Data;
    struct Node *Next;
}QNode;

typedef struct{
    QNode *rear;
    QNode *front;
}LinkQueue;

void Initialize(LinkQueue *PtrQ)
{
    PtrQ->rear = PtrQ->front = NULL;
}

int IsEmpty(LinkQueue *PtrQ)
{
    return PtrQ->front == NULL;
}

void AddQ(LinkQueue *PtrQ, QElementType item)
{
    QNode *cell = (QNode *)malloc(sizeof(QNode));
    cell->Data = item;
    cell->Next = NULL;
    if(IsEmpty(PtrQ))
        PtrQ->front = PtrQ->rear = cell;
    else
    {
        PtrQ->rear->Next = cell;
        PtrQ->rear = cell;
    }
}

QElementType DeleteQ(LinkQueue *PtrQ)
{
    QNode *FrontCell;
    QElementType FrontElem;
    if(PtrQ->front == NULL)
    {
        printf("The queue is empty!\n");
        exit(0);
    }
    FrontCell = PtrQ->front;
    if(PtrQ->front == PtrQ->rear)
        PtrQ->front = PtrQ->rear = NULL;
    else
        PtrQ->front = PtrQ->front->Next;
    FrontElem = FrontCell->Data;
    free(FrontCell);
    return FrontElem;
}

void DestroyQueue(LinkQueue Q)
{
    QNode *cell;
    while(cell = Q.front)
    {
        Q.front = Q.front->Next;
        free(cell);
    }
}

void CreatALGraph(ALGraph *G)
{
    unsigned long int i, j, k;
    EdgeNode *edge;
    scanf("%ld %ld", &(G->n), &(G->e));
    for(i=0; i<G->n; i++)
    {
        G->adjlist[i].Visited = 0;
        G->adjlist[i].Percent = 0.0;
        G->adjlist[i].FirstEdge = NULL;
    }
    for(k=0; k<G->e; k++)
    {
        scanf("%ld %ld", &i, &j);
        edge = (EdgeNode *)malloc(sizeof(EdgeNode));
        edge->AdjV = j-1;
        edge->Next = G->adjlist[i-1].FirstEdge;
        G->adjlist[i-1].FirstEdge = edge;
        edge = (EdgeNode *)malloc(sizeof(EdgeNode));
        edge->AdjV = i-1;
        edge->Next = G->adjlist[j-1].FirstEdge;
        G->adjlist[j-1].FirstEdge = edge;
    }
}
void SixDegree_BFS(ALGraph *G, VertexType Start)
{
    QElementType qe;
    LinkQueue Q;
    VertexType v;
    EdgeNode *edge;
    unsigned long int VisitCount = 1;
    Initialize(&Q);
    G->adjlist[Start].Visited = 1;
    qe.v = Start;
    qe.Layer = 0;
    AddQ(&Q, qe);
    while(!IsEmpty(&Q))
    {
        qe = DeleteQ(&Q);
        v = qe.v;
        for(edge = G->adjlist[v].FirstEdge; edge; edge = edge->Next)
        {
            if(!G->adjlist[edge->AdjV].Visited)
            {
                G->adjlist[edge->AdjV].Visited = 1;
                VisitCount++;
                if(++qe.Layer < SIX)
                {
                    qe.v = edge->AdjV;
                    AddQ(&Q, qe);
                }
                qe.Layer--;
            }
        }
    }
    DestroyQueue(Q);
    G->adjlist[Start].Percent = 100.0 * (double)VisitCount/(double)G->n;
}

int main()
{
    VertexType i, j;
    ALGraph *G = malloc(sizeof(ALGraph));
    CreatALGraph(G);
    for(i=0L; i<G->n; i++)
    {
        SixDegree_BFS(G, i);
        printf("%ld: %.2f%%\n", i+1, G->adjlist[i].Percent);
        for(j=0; j<G->n; j++)
        {
            G->adjlist[j].Visited = 0;
        }
    }
    return 0;
}
