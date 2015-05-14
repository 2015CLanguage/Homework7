# include<stdio.h>
void f1(int x)
{
	int i,j=0;
	for(i=1;i<=x;i++)
	{
		
		if(x%i==0)
			j=j+1;
	}
	if(j>2)
		printf("然而这并不是一个素数:）\n");
	else
		printf("这个是一个素数:）\n");
}
int main(void)
{
	int m;
	printf("请输入一个整数：\n");
	scanf("%d",&m);
	f1(m);

	return 0;
}
