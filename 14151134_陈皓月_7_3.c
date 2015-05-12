#include<stdio.h>
int Prime(int n);
void main()
{
	int n;
	printf("请输入一个大于一的整数\n");
	scanf("%d",&n);
	Prime(n);  //函数调用
}
int Prime(int n)   //函数定义
{
	int i,r;
	for(i=2;i<=n;i++)
	{
		r=n%i;
		if(r==0&&i!=n)  //判断n是否为合数
		{
			printf("%d不为素数\n",n);
			break;
		}
		else if(i==n)   //判断n是否为素数
			printf("%d为素数\n",n);

	}
	return 0;
}
