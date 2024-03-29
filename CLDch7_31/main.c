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
    printf("输入图中顶点个数和边数n, e: ");
    scanf("%d %d", &n, &e);
    CreatMGraph(&G, n, e);
    while(xz != 0)
    {
        printf("*******求城市之间的最短路径*******\n");
        printf("=================================\n");
        printf("1. 求一个城市到所有城市的最短路径\n");
        printf("2. 求任意的两个城市之间的最短路径\n");
        printf("=================================\n");
        printf("   请选择：1 或 2， 选择 0 退出 ：");
        scanf("%d", &xz);
        if(xz==2)
        {
            Floyd(G, n);
            printf(" 输入源点（或称起点）和终点：v, w :");
            scanf("%d %d", &v, &w);
            k = P[v][w];
            if(k==0)
            {
                printf(" 顶点%d到%d无路径！ \n", v, w);
            }
            else
            {
                printf(" 顶点%d到%d的最短路径是：%d ", v, w, v);
                while(k!=w)
                {
                    printf("-> %d", k);
                    k = P[k][w];
                }
                printf("-> %d", w);
                printf(" 路径长度： %d\n", D[v][w]);
            }
        }
        else if(xz==1)
        {
            printf(" 求单源路径，输入源点 v : ");
            scanf("%d", &v);
            Dijkstra(G, v, n);
        }
    }
    printf(" 结束求最短路径，再见！\n");
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
    printf("输入%d条边i、j及w：\n", e);
    for(k=1; k<=e; k++)
    {
        scanf("%d,%d,%d", &i, &j, &w);
        G.arcs[i][j] = w;
    }
    printf("有向图的存储结构建立完毕！\n");
}
*/
