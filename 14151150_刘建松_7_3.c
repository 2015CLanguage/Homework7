#include<stdio.h>
void judjement(int x);
int main()
{
	int a;
	printf("请输入要判断的整数：");
	scanf("%d",&a);
	judjement(a);
	return 0;
}
void judjement(int x)
{
	int i;
	if(x<=2)
		printf("%d是素数。\n",x);
	else
		for(i=2;i<x;i++)
		{
			if((x%i)==0)
				break;
			
		}
		if(i==x)
			printf("%d是素数。\n",x);
		else
			printf("%d不是素数。\n",x);
}
