#include<stdio.h>
void SUSHU(int x);
int main()
{
	int x;
	printf("请输入一个整数x\n");
	printf("x=");
	scanf("%d",&x);
	SUSHU(x);
	return 0;
}
void SUSHU(int x)
{
	int i,j=0;
	for(i=1;i<x;i++)
	{
		if(x/i!=x&&x%i==0)
			j=1;
	}
	if(j)
		printf("该数不是素数!\n");
	else
		printf("该数是素数!\n");
}
