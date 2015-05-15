#include "stdio.h"
void k(int x);
int main()
{
	int a;
	printf("请输入一个数：\n");
	scanf("%d",&a);
	k(a);
	return 0;
}
void k(int x)
{
	int i,r=0;
	if(x>2)
	{
		for(i=2;i<x;i++)
		{
			if(x%i==0)
			{
				r=1;
			}
		}
	}
	else if(x==1){r=1;}
	if(r==1)
	{
		printf("%d不是素数\n",x);
	}
	else printf("%d是素数\n",x);
}
