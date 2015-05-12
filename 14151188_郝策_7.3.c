#include"stdio.h"
void ss(int num);
int main()
{
	int n,i=1;
	for(i=1;i=1;)
	{
		printf("请输入查找数字\n");
		printf("n=");
		scanf("%d",&n);
		ss(n);
	printf("\n");
	}
}

void ss(int num)
{
	int i;
	for(i=num-1;i>1;i--)
	{
		if(num%i==0)
		{	printf("%d不是素数",num);
			break;
		}
		if(i==2)
			printf("%d是素数",num);
	}	
	
	
	
	
	
	
	
}
