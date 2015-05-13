#include <stdio.h>
#include <string.h>
int attach()
{
	int i,j,t;
	char a[20000],b[10000];
	for(i=0;i<10000;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]=='\n')
		{
			j=i;
			break;
		}
	}
	for(i=0;i<10000;i++)
	{
		scanf("%c",&b[i]);
		if(b[i]=='\n')
		{
			t=i;
			break;
		}
	}
	for(i=j;i<20000;i++)
	{
		if((i-j)<t+1)
			a[i]=b[i-j];
		else
			break;
	}
	for(i=0;i<t+j+1;i++)
		printf("%c",a[i]);
	return(0);
}
void main()
{
	printf("请输入两个字符串（回车结束）\n");
	attach();
}
