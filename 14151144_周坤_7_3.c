# Homework7
#include<stdio.h>
void main()
{
  int dis(int x)
	int num;
	char j;
	while(1)
	{
		printf("Please enter a number:");
		scanf("%d",&num);
		getchar('\n');
		if(dis(num))
			printf("%d不是素数\n",num);
		else
			printf("%d是素数\n",num);
		
		printf("Continue or not(Y/N)?  ");
		scanf("%c",&j);
		if(j=='N'||j=='n')
			break;
	}
}
int dis(int x)
{
	int i;
	for(i=2;i<(x/2);i++)
	{
		if(x%i==0&&(x!=i))
			return 1;
	}
	return 0;
}
