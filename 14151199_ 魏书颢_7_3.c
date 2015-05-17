#include"stdio.h"
int fac(int x);
void main()
{
	int x;
	printf("请输入一个整数\n");
	scanf("%d",&x);
	if(fac(x)==1)
		printf("是素数\n");
	if(fac(x)==0)
		printf("不是素数\n");


}
int fac(int x)
{
	int i,flag;
	flag=1;
	for(i=2;i<x;i++)
		if(x%i==0)
		flag=0;
	return(flag);
}
