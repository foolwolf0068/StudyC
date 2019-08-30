#include <stdio.h>
#include <stdlib.h>
#define MVNum 100
#define Maxint 32767
typedef char VertexType;
typedef int Adjmatrix;
typedef enum {FALSE, TRUE} boolean;
typedef struct
{
    VertexType vexs[MVNum];
    Adjmatrix  arcs[MVNum][MVNum];
}MGraph;
int D1[MVNum], P1[MVNum];
int D[MVNum][MVNum], P[MVNum][MVNum];

//void CreatMGraph(MGraph &G, int n, int e);
#include "save.c"
#include "dijkstra.c"
#include "floyd.c"
int main()
{
    //printf("Hello world!\n");
    int i=0;
if ( i==0 ) {
    int i=3;
}
printf("%d\n", i);
char x[] = "China";
printf("%d\n", sizeof(x));
    MGraph G;
    int n, e, v, w, k;
    int xz = 1;
    printf("����ͼ�ж�������ͱ���n, e: ");
    scanf("%d %d", &n, &e);
    CreatMGraph(&G, n, e);
    while(xz != 0)
    {
        printf("*******�����֮������·��*******\n");
        printf("=================================\n");
        printf("1. ��һ�����е����г��е����·��\n");
        printf("2. ���������������֮������·��\n");
        printf("=================================\n");
        printf("   ��ѡ��1 �� 2�� ѡ�� 0 �˳� ��");
        scanf("%d", &xz);
        if(xz==2)
        {
            Floyd(G, n);
            printf(" ����Դ�㣨�����㣩���յ㣺v, w :");
            scanf("%d %d", &v, &w);
            k = P[v][w];
            if(k==0)
            {
                printf(" ����%d��%d��·���� \n", v, w);
            }
            else
            {
                printf(" ����%d��%d�����·���ǣ�%d ", v, w, v);
                while(k!=w)
                {
                    printf("-> %d", k);
                    k = P[k][w];
                }
                printf("-> %d", w);
                printf(" ·�����ȣ� %d\n", D[v][w]);
            }
        }
        else if(xz==1)
        {
            printf(" ��Դ·��������Դ�� v : ");
            scanf("%d", &v);
            Dijkstra(G, v, n);
        }
    }
    printf(" ���������·�����ټ���\n");
    return 0;
}

/*void CreatMGraph(MGraph &G, int n, int e)
{
    int i, j, k, w;
    for(i=1; i<=n; i++)
    {
        G.vexs[i] = (char)i;
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            G.arcs[i][j] = Maxint;
        }
    }
    printf("����%d����i��j��w��\n", e);
    for(k=1; k<=e; k++)
    {
        scanf("%d,%d,%d", &i, &j, &w);
        G.arcs[i][j] = w;
    }
    printf("����ͼ�Ĵ洢�ṹ������ϣ�\n");
}
*/