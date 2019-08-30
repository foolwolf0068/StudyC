#include <stdio.h>
#include <stdlib.h>
#define Nmax 100000
typedef int ElementType;

void Swap(ElementType *a, ElementType *b);
void PrintA(ElementType A[], int N);
void ReadA(ElementType A[], int N);

void Bubble_Sort(ElementType A[], int N);
void Insertion_Sort(ElementType A[], int N);
void Shell_Sort(ElementType A[], int N);

void Heap_Sort(ElementType A[], int N);
void PercDown(ElementType A[], int P, int N);

void Merge(ElementType A[], ElementType TempA[], int L, int R, int RightEnd);
void Msort(ElementType A[], ElementType TempA[], int L, int RightEnd);
void Merge_Sort(ElementType A[], int N);

void Merge1_Sort(ElementType A[], int N);
void Merge_pass(ElementType A[], ElementType TempA[], int N, int Length);

void Quick_Sort(ElementType A[], int N);
void Qsort(ElementType A[], int Left, int Right);
ElementType Median3(ElementType A[], int Left, int Right);
int main()
{
    ElementType A[Nmax] = {0};
    int n;
    scanf("%d", &n);
    ReadA(A, n);
    //Bubble_Sort(A, n);
    //Insertion_Sort(A,n);
    //Shell_Sort(A,n);
    //Heap_Sort(A, n);
    //Merge1_Sort(A, n);
    Quick_Sort(A, n);
    PrintA(A, n);
    return 0;
}
void Quick_Sort(ElementType A[], int N)
{
    Qsort(A, 0, N-1);
}
void Qsort(ElementType A[], int Left, int Right)
{
    int Pivot, Cutoff, Low, High;
    ElementType Temp;
    Cutoff = 100;
    if(Cutoff<=Right-Left)
    {
        Pivot = Median3(A, Left, Right);
        Low = Left;
        High = Right-1;
        while(1)
        {
            while(A[++Low] < Pivot) ;
            while(A[--High] > Pivot) ;
            if(Low < High)
            {
                Temp = A[Low];
                A[Low] = A[High];
                A[High] = Temp;
            }
            else
            {
                break;
            }
        }
        Temp = A[Low];
        A[Low] = A[Right-1];
        A[Right-1] = Temp;
        Qsort(A, Left, Low-1);
        Qsort(A, Low+1, Right);
    }
    else
    {
        Insertion_Sort(A+Left, Right-Left+1);
    }

}
ElementType Median3(ElementType A[], int Left, int Right)
{
    int Center = (Left+Right)/2;
    if(A[Left] > A[Center])
    {
        Swap(&A[Left],&A[Center]);
    }
    if(A[Left] > A[Right])
    {
        Swap(&A[Left],&A[Right]);
    }
    if(A[Right] < A[Center])
    {
        Swap(&A[Right],&A[Center]);
    }
    Swap(&A[Right-1],&A[Center]);
    return A[Right-1];

}

void Merge1_Sort(ElementType A[], int N)
{
    int length;
    ElementType *TempA;
    length = 1;
    TempA = (ElementType *)malloc(N*sizeof(ElementType));
    if(TempA != NULL)
    {
        while(length<N)
        {
            Merge_pass(A, TempA, N, length);
            length *= 2;
            Merge_pass(TempA, A, N, length);
            length *= 2;
        }
        free(TempA);
    }else
    {
        printf("No enough space!");
    }
}
void Merge_pass(ElementType A[], ElementType TempA[], int N, int Length)
{
    int i, j;
    for(i=0; i<=N-2*Length; i += 2*Length)
    {
        Merge(A, TempA, i, i+Length, i+2*Length-1);
    }
    if(i+Length<N)
    {
        Merge(A, TempA, i, i+Length, N-1);
    }else
    {
        for(j=i; j<N; j++)
        {
            TempA[j] = A[j];
        }
    }
}
void Merge_Sort(ElementType A[], int N)
{
    ElementType *TempA;
    TempA = (ElementType *)malloc(N*sizeof(ElementType));
    if(TempA != NULL)
    {
        Msort(A, TempA, 0, N-1);
        free(TempA);
    }
    else
    {
        printf("No enough space!");
    }
}
void Msort(ElementType A[], ElementType TempA[], int L, int RightEnd)
{
    int Center;
    if(L<RightEnd)
    {
        Center = (L + RightEnd) / 2;
        Msort(A, TempA, L, Center);
        Msort(A, TempA, Center + 1, RightEnd);
        Merge(A, TempA, L, Center+1, RightEnd);
    }
}
void Merge(ElementType A[], ElementType TempA[], int L, int R, int RightEnd)
{
    int LeftEnd, NumElement, Temp;
    int i;
    LeftEnd = R - 1;
    Temp = L;
    NumElement = RightEnd - L + 1;
    while(L<=LeftEnd && R<=RightEnd)
    {
        if(A[L] <= A[R])
        {
            TempA[Temp++] = A[L++];
        }else
        {
            TempA[Temp++] = A[R++];
        }
    }
    while(L<=LeftEnd)
    {
        TempA[Temp++] = A[L++];
    }
    while(R<=RightEnd)
    {
        TempA[Temp++] = A[R++];
    }
    for(i=0; i<NumElement; i++, RightEnd--)
    {
        A[RightEnd] = TempA[RightEnd];
    }
}
void Heap_Sort(ElementType A[], int N)
{
    int i;
    ElementType temp;
    for(i=N/2; i>=0; i--)
    {
        PercDown(A, i, N);
    }
    for(i=N-1; i>0; i--)
    {
        temp = A[0];
        A[0] = A[i];
        A[i] = temp;
        PercDown(A, 0, i);
    }
}
void PercDown(ElementType A[], int P, int N)
{
    int Parent, Child;
    ElementType X;
    X = A[P];
    for(Parent=P; (Parent*2+1)<N; Parent=Child)
    {
        Child = Parent * 2 + 1;
        if((Child != N-1) && (A[Child]<A[Child+1]))
        {
            Child++;
        }
        if(X>A[Child])
        {
            break;
        }
        else
        {
            A[Parent] = A[Child];
        }
    }
    A[Parent] = X;
}
void Shell_Sort(ElementType A[], int N)
{
    int D, P, i;
    ElementType temp;
    for(D=N/2; D>0; D/=2)
    {
        for(P=D; P<N; P++)
        {
            temp = A[P];
            for(i=P; i>=D && A[i-D]>temp; i-=D)
            {
                A[i] = A[i-D];
            }
            A[i] = temp;
        }
    }
}
void Insertion_Sort(ElementType A[], int N)
{
    int i, P;
    ElementType temp;
    for(P=1; P<N; P++)
    {
        temp = A[P];
        for(i=P; i>0 && A[i-1]>temp; i--)
        {
            A[i] = A[i-1];
        }
        A[i] = temp;
    }
}
void Bubble_Sort(ElementType A[], int N)
{
    int flag = 0;
    for(int P=N-1; P>=0; P--)
    {
        flag = 0;
        for(int i=0; i<P; i++)
        {
            if(A[i]>A[i+1])
            {
                //Swap(&A[i], &A[i+1]);
                A[i] = A[i]^A[i+1];
                A[i+1] = A[i]^A[i+1];
                A[i] = A[i]^A[i+1];
                flag = 1;
            }
        }
        if (flag==0)
        {
            break;
        }
    }
}

void Swap(ElementType *a, ElementType *b)
{
    ElementType temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void ReadA(ElementType A[], int N)
{
    for(int i=0; i<N; i++)
    {
        scanf("%d", &A[i]);
    }
}
void PrintA(ElementType A[], int N)
{
    for(int i=0; i<N; i++)
    {
        printf("%d", A[i]);
        if(i==N-1) break;
        printf(" ");
    }
}
