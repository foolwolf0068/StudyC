#include <stdio.h>
#define N 10 //����N�Ľ׳ˣ��޸�N�Ķ���ɼ���10000�����������Ľ׳�
int a[N]={1},n=N,i,c,m;
void main()
{
for(;n;(a[i]=c)>0?m++:0,n--)
for(c=i=0;i<=m;i++)a[i]=(c+=a[i]*n)%10000,c/=10000;
for(c=m+1;c;)printf(c>m?"%d":"%04d",a[--c]);
}
