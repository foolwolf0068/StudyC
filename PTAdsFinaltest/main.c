#include <stdio.h>
#include <string.h>

void getpre(int *post, int *in, int n)
{
    if(n <= 0) return;
    int i = 0, root = post[n-1];
    for(; i<n; ++i) {
        if(in[i] == root)   break;
    }
    printf(" %d", root);
    getpre(post, in, i);
    getpre(post+i, in+i+1, n-i-1);
}

int main()
{
    int n, post[40], in[40];
    scanf("%d", &n);
    for(int i=0; i<n; ++i) {
        scanf("%d", &post[i]);
    }
    for(int i=0; i<n; ++i) {
        scanf("%d", &in[i]);
    }

    printf("Preorder:");
    getpre(post, in, n);

    return 0;
}
