#include<stdio.h>
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
void main()
{
	int num;
	char j;
	while(1)
	{
		printf("Please enter a number:");
		scanf("%d",&num);
		getchar();//中和一个回车换行
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
