#include <stdio.h>
int main()
{
	int a,b,imax,imin,tend;
	int max(int,int);
	printf("请输入两个整数:");
	scanf("%d,%d",&a,&b);
	if(a<b)
	{
		tend=a;
		a=b;
		b=tend;
	}
	imax=max(a,b);
	imin=a*b/imax;
	printf("最大公约数是d%\n",imax);
	printf("最大公倍数是d%\n",imin);
}
void max(int x,int y);
{
int z;
while(x%y!=0)
{
	z=x%y;
	x=y;
	y=z;
}
return (y);
}#include <stdio.h>
int main()
{
	int a,b,imax,imin,tend;
	int max(int,int);
	printf("请输入两个整数:");
	scanf("%d,%d",&a,&b);
	if(a<b)
	{
		tend=a;
		a=b;
		b=tend;
	}
	imax=max(a,b);
	imin=a*b/imax;
	printf("最大公约数是d%\n",imax);
	printf("最大公倍数是d%\n",imin);
}
void max(int x,int y);
{
int z;
while(x%y!=0)
{
	z=x%y;
	x=y;
	y=z;
}
return (y);
}
