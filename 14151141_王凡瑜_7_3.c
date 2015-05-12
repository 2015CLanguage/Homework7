#include<stdio.h>

int judge(int n);

void main()
{
	int n,flag;
	printf("Please input an integer.\n");
	scanf("%d",&n);
	flag=judge(n);
	if(flag)
		printf("%d is a prime number.\n",n);
	else
		printf("%d is not a prime number.\n",n);
}

int judge(int n)
{
	int i,flag=1;
	for(i=n-1;i>1;i--)
	{
		if((n%i)==0)
		{
			flag=0;
			break;
		}
	}
	return flag;
}
