#include "stdio.h"
void main()
{
	void judge(int x);
	int a;
	printf("请输入整数：");
	scanf("%d",&a);
	judge(a);
}
void judge(int x)
{
	int i;
	for(i=2;i<x;i++)
		if(x%i==0)break;
	if(i!=x)printf("%d不为素数\n",x);
	else printf("%d为素数\n",x);
}
