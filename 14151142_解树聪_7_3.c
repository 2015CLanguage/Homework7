#include<stdio.h>
int prime(int a);
int prime(int a)
{
	int i,b;
	for(i=a-1;i>=1;i--)
	{
		b=a%i;
		if(b==0)
			break;
	}
	if(i>1)
		return 0;
	else
		return 1;

}
void main()
{
	int n,c;
	printf("请输入一个整数：");
	scanf("%d",&n);
	c=prime(n);
	if(c==0)
		printf("%d不是素数",n);
	else
		printf("%d是素数",n);
}
