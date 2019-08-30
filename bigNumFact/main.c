#include <stdio.h>
#define N 10 //计算N的阶乘，修改N的定义可计算10000以内任意数的阶乘
int a[N]={1},n=N,i,c,m;
void main()
{
for(;n;(a[i]=c)>0?m++:0,n--)
for(c=i=0;i<=m;i++)a[i]=(c+=a[i]*n)%10000,c/=10000;
for(c=m+1;c;)printf(c>m?"%d":"%04d",a[--c]);
}
