#include<stdio.h>
int max(int x,int y);
int min(int x,int y);
void main()
{
	int a,b,c,d;
	scanf("%d,%d",&a,&b);
	c=max(a,b);
	d=min(a,b);
	printf("max is %d\n",c);
	printf("min is %d",d);
}
int max(int x,int y)
{
	int t1=0,t2=0,m=0,j;
	j=y;
	for(;j>0;j--)
	{
        t1=y%j;
		t2=x%j;
		if(t1==0&&t2==0)
		{
			m=j;
			break;
		}
	}
	return m;
}
int min(int x,int y)
{
	int s1=0,s2=0,n=0,i;
	i=y;
	for(;i>0;i++)
	{
        s1=i%y;
        s2=i%x;
		if(s1==0&&s2==0)
		{
			n=i;
			break;
		}
	}
	return n;
}
