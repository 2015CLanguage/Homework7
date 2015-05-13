#include <stdio.h>
int ifsu(int(n))
{
	int i,flag=-1;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
			flag=flag+1;
	}
	if(flag==0)
		printf("%d为一素数\n",n);
	else
		printf("%d不是素数\n",n);
	return(0);
}
void main()
{
	int n;
	printf("请输入一个正整数\n");
	scanf("%d",&n);
	if(n<=0)
		printf("您的输入不是正整数，输入错误\n");
	if(n==1)
		printf("%d为一素数\n",n);
	if(n>1)
		ifsu(n);
}
