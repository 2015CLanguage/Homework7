#include <stdio.h>
int main()
{
int f(int x,int y);
int g(int x,int y);
int a,b,c,d;
printf("shuruliangeshu\n");
scanf("%d%d",&a,&b);
c=f(a,b);
d=g(a,b);
printf("%d,%d\n",c,d);
return 0;
}

int f(int x,int y)
{
int i,t,z;
if(x>y)
	t=y;
else
	t=x;
for(i=t;i>=1;i--)
{
	if(x%i==0&&y%i==0)
	{
		z=i;
		break;
	}	
}
return(z);
}

int g(int x,int y)
{
int i,t,z;
if(x>y)
	t=x;
else
	t=y;
for(i=t;i<=x*y;i++)
	{
	if(i%x==0&&i%y==0)
		{
		z=i;
		break;
		}
	}
return(z);
}
