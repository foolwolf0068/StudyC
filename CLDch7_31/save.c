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
    printf("����%d����i��j��w��\n", e);
    for(k=1; k<=e; k++)
    {
        scanf("%d %d %d", &i, &j, &w);
        G->arcs[i][j] = w;
    }
    printf("����ͼ�Ĵ洢�ṹ������ϣ�\n");
}
