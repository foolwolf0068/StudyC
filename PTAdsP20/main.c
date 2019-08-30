#include <stdio.h>
#include <stdlib.h>

#define MAXV 500
#define Inf 100000000

typedef struct{
    int Dist[MAXV][MAXV];
    int Cost[MAXV][MAXV];
    int Visited[MAXV];
    int MinDist[MAXV];
    int MinCost[MAXV];
    int VertexN, EdgeN;
} Graph;

void InitializeG(Graph *G)
{
    int i, j;
    for(i=0; i<MAXV; i++)
    {
        for(j=0; j<MAXV; j++)
        {
            G->Dist[i][j] = Inf;
            G->Cost[i][j] = Inf;
        }
        G->Visited[i] = 0;
        G->MinCost[i] = G->MinDist[i] = Inf;
    }
    G->VertexN = G->EdgeN = 0;
}

void ReadG(Graph *G, int *S, int *D)
{
    int i, V1, V2;
    scanf("%d %d %d %d", &G->VertexN, &G->EdgeN, S, D);
    for(i=0; i<G->EdgeN; i++)
    {
        scanf("%d %d", &V1, &V2);
        scanf("%d %d", &G->Dist[V1][V2], &G->Cost[V1][V2]);
        G->Dist[V2][V1] = G->Dist[V1][V2];
        G->Cost[V2][V1] = G->Cost[V1][V2];
    }
}

void Dijkstra(Graph *G, int S)
{
    int v, w, minD, minV;
    G->Visited[S] = 1;
    G->MinDist[S] = G->MinCost[S] = 0;
    for(v=0; v<G->VertexN; v++)
    {
        G->MinDist[v] = G->Dist[S][v];
        G->MinCost[v] = G->Cost[S][v];
    }
    for(w=1; w<G->VertexN; w++)
    {
        minD = Inf;
        for(v=0; v<G->VertexN; v++)
        {
            if(!G->Visited[v] && G->MinDist[v] <= minD)
            {
                minD = G->MinDist[v];
                minV = v;
            }
        }
        if(minD < Inf)
        {
            G->Visited[minV] = 1;
        }
        else
        {
            break;
        }
        for(v=0; v<G->VertexN; v++)
        {
            if(!G->Visited[v])
            {
                if(G->MinDist[minV] + G->Dist[minV][v] < G->MinDist[v])
                {
                    G->MinDist[v] = G->MinDist[minV] + G->Dist[minV][v];
                    G->MinCost[v] = G->MinCost[minV] + G->Cost[minV][v];
                }
                else if((G->MinDist[minV] + G->Dist[minV][v] == G->MinDist[v]) && (G->MinCost[v] > G->MinCost[minV] + G->Cost[minV][v]))
                {
                    G->MinCost[v] = G->MinCost[minV] + G->Cost[minV][v];
                }
            }
        }
    }
}
int main()
{
    int S, D;
    Graph *G = malloc(sizeof(Graph));
    InitializeG(G);
    ReadG(G, &S, &D);
    Dijkstra(G, S);
    printf("%d %d\n", G->MinDist[D], G->MinCost[D]);
    return 0;
}

