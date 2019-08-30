#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int *array;
    int length;
}DArray;
DArray create(int n);
void grow(DArray *, int);
void print(DArray *p);
void release(DArray *p);
int main()
{
    DArray a;
    int n;
    scanf("%d", &n);
    a=create(n);
    print(&a);
    grow(&a, n*2);
    print(&a);
    release(&a);
    printf("Hello world!\n");
    return 0;
}
DArray create(int n)
{
    DArray a;
    int i;
    a.array = (int *)malloc(sizeof(int)*n);
    if (a.array == NULL)
    {
        return;
    }
    else
    {
        a.length = n;
        for (i=0; i<a.length; i++)
        {
            scanf("%d",&a.array[i]);
        }
    }
    return a;
}
void grow(DArray *aPtr , int n)
{
    int *p;
    int i;
    p = (int *)malloc(sizeof(int)*n);
    if(p==NULL)
        return;
    else
    {
        for(i=0; i<aPtr->length; i++)
            p[i] = aPtr->array[i];
        for(i=aPtr->length; i<n; i++)
            scanf("%d", &p[i]);
        free(aPtr->array);
        aPtr->array = p;
        aPtr->length = n;
    }
}
void print( DArray *p)
{
    int i;
    for( i =0; i<p->length; i++)
        printf("%d ",p->array[i]);
    return;
}
void release(DArray *p)
{
    free(p->array);
}
