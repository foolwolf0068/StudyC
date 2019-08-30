/** \brief Dijkstra 算法
 *
 * \param
 * \param
 * \return
 *
 */
void Dijkstra(MGraph G, int v1, int n)
{
    int D2[MVNum], P2[MVNum];
    int v, i, w, min;
    boolean S[MVNum];
    for(v=1; v<=n; v++)
    {
        S[v] = FALSE;
        D2[v] = G.arcs[v1][v];
        if(D2[v]<Maxint)
        {
            P2[v] = v1;
        }
        else
        {
            P2[v] = 0;
        }
    }
    D2[v1] = 0;
    S[v1] = TRUE;
    for(i=2; i<n; i++)
    {
        min = Maxint;
        for(w=1; w<=n; w++)
        {
            if(!S[w] && D2[w]<min)
            {
                v = w;
                min = D2[w];
            }
            S[v] = TRUE;
            for(w=1; w<=n; w++)
            {
                if(!S[w]&&(D2[v]+G.arcs[v][w]<D2[w]))
                {
                    D2[w] = D2[v] + G.arcs[v][w];
                    P2[w] = v;
                }
            }
        }
    }
    printf("路径长度  路径\n");
    for(i=1; i<=n; i++)
    {
        printf("%5d", D2[i]);
        printf("%5d", i);
        v = P2[i];
        while(v!=0)
        {
            printf("<-%d", v);
            v = P2[v];
        }
        printf("\n");
    }
}
