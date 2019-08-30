void CreatMGraph(MGraph *G, int n, int e)
{
    int i, j, k, w;
    for(i=1; i<=n; i++)
    {
        G->vexs[i] = (char)i;
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            G->arcs[i][j] = Maxint;
        }
    }
    printf("输入%d条边i、j及w：\n", e);
    for(k=1; k<=e; k++)
    {
        scanf("%d %d %d", &i, &j, &w);
        G->arcs[i][j] = w;
    }
    printf("有向图的存储结构建立完毕！\n");
}
