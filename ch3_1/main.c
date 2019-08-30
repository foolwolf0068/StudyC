#include <stdio.h>
#include <stdlib.h>
/** \brief
 binsearch函数： 在升序排列的序列中查找x
 */
int binsearch(int x, int v[], int n);
int main()
{
    printf("Hello world!\n");
    return 0;
}
int binsearch(int x, int v[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = low + (high - low)/2;
        if (x < v[mid])
        {
            high = mid - 1;
        }
        else if (x > v[mid])
        {
            low = mid + 1;
        }
        else
        {
            return mid; // 找到了匹配的值
        }
    }
    return -1; // 没有匹配的值

}
