void Floyd(MGraph G, int n)
{
    int i, j, k;
    for(i=0; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(G.arcs[i][j] != Maxint)
            {
                P[i][j] = j;
            }
            else
            {
                P[i][j] = 0;
            }
            D[i][j] = G.arcs[i][j];
        }
    }
    for(k=1; k<=n; k++)
    {
        for(i=1; i<=n; i++)
        {
            if(D[i][k] + D[k][j] < D[i][j])
            {
                D[i][j] = D[i][k] + D[k][j];
                P[i][j] = P[i][k];
            }
        }
    }
}
