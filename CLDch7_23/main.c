#include <stdio.h>
#include <stdlib.h>
int qq(int);
int main()
{
    //printf("Hello world!\n");
    int n;
    n = 100;
    printf("��100�����ɷֳ�%d�顣\n", qq(n));
    return 0;
}
int qq(int n)
{
    int i = 0;
    int q[101];
    q[0] = 1;
    for(i=1;i<=n;i++)
    {
        q[i] = q[i-1] + i;
    }
    return q[n];
}
