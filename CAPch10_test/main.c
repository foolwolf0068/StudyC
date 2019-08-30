#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char s[1000],*p;
	int check,sum,hour,min,sec;
	do
	{
		scanf("%s",s);
		if (s[0]=='$' && s[1]=='G'&&s[2]=='P'&&s[3]=='R'&&s[4]=='M'&&s[5]=='C')
		{
			for (p=s+7;*p!=',';p++);        //找到定位的位置，刚开始直接输的第19位，结果错误，简直是个大坑
			if (*(p+1)=='A')
			{
				p=s;
				check=*(++p);
				for (p=p+1;*p!='*';p++)         //进行异或计算
				{
					check = check^(*p);
				}
				p++;
				sum=0;
				for (;*p!='\0';p++)              //将十六进制转换为10进制
				{
					if (*p>='0' && *p<='9')
					{
						sum = sum*16+*p-'0';
					}else if (*p>='A' && *p<='F')
					{
						sum = sum*16 +*p-'A'+10;
					}
				}
				if (sum==(check%65536))            //记录时间
				{
					hour = (s[7]-'0')*10+s[8]-'0'+8;
					if (hour>=24) hour=hour-24;
					min = (s[9]-'0')*10+s[10]-'0';
					sec = (s[11]-'0')*10+s[12]-'0';
				}
			}
		}
	}while(strcmp(s,"END")!=0);
	printf("%02d:%02d:%02d\n",hour,min,sec);

    return 0;
}
