#include <stdio.h>
#include <stdlib.h>
// �㽭��ѧPTA���������Ŀ��6-10 �����׳�
void Print_Factorial ( const int N );

int main()
{
    int N;

    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
void Print_Factorial ( const int N )
{
    if(N<0||N>1000)
    {
        printf("Invalid input\n");
    }
    else if(N<=1)
    {
        printf("%d\n",1);
    }
    else
    {
        int i,j,n,temp,d=1,carry;//tempΪ�׳�Ԫ������ʱ����ĳ˻���carry�ǽ�λ ��d��λ��
        int a[2700];//ȷ�������㹻��
        n=N;
        a[0]=1;//�ȳ�ʼ��Ϊ1�������������
        for(i=2;i<=n;i++)//��2��ʼ�׳� ,ÿ��ѭ������i�׳˵Ľ��
        {
            for(j=1,carry=0;j<=d;j++)// ÿ��ѭ����ʼ����λ��ֵ
            {
                temp=a[j-1]*i+carry;//��Ӧ�׳��е�һ���뵱ǰ������ʱ�����ĳλ��˼��Ͻ�λ
                a[j-1]=temp%10;//������ʱ�����λ����Ϣ
                carry=temp/10;//����н�λ�ͽ��������ѭ��
            }
            while(carry)     //����н�λ
            {
                ++d;        //���ӽ�λ��λ����һ
                a[d-1]=carry%10;   //���µĽ�λ��ֵ
                carry=carry/10;    //�����ɲ������ٽ�λ
            }
        }
        //printf("n!=");
        for(j=d-1;j>=0;j--)       //�Ӹ�λ���λ�������
        printf("%d",a[j]);
        printf("\n");
    }
}
