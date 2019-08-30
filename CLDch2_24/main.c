#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const int SIZE = 10;
int main()
{
    float *pf, *tempf, *min, temp, sum = 0.0;
    if ((min = tempf = pf = (float *)malloc(SIZE*sizeof(float))) == NULL)
    {
        printf("内存分配错误\n");
    }
    else
    {
        for ( ; tempf-pf < SIZE; tempf++)
        {
            scanf("%10f", &temp);
            *tempf = temp;
        }
        for(tempf--; tempf >= pf; tempf--)
        {
            min = (*min > *tempf)? tempf:min;
            sum += *tempf;
        }
    }
    printf("和是%f，最小值是%f\n", sum, *min);
    return 0;
}
