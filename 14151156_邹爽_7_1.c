#include<stdio.h>
int main()
{
	int gcd(int x , int y);
	int lcm(int x , int y);
	int a,b,c,d;
	scanf("%d %d",&a,&b);
	c=gcd(a,b);
	d=lcm(a,b);
	printf("greatest common divisor is %d\n",c);
	printf("least common multiple is %d\n",d);
	return 0;
}

int gcd(int x , int y)
{
	int z,i;
	if(x>y)
	{
		x=x;
		y=y;
	}
	else
	{
		z=x;
		x=y;
		y=z;
	}   
	for(i=y;i>=1;i--)
		if(x%i==0&&y%i==0)
		{
			z=i;
			break;
		}
	return(z);
}

int lcm(int x , int y)
{
	int z,i,m,n,p;
	if(x>y)
	{
		x=x;
		y=y;
	}
	else
	{
		z=x;
		x=y;
		y=z;
	}
	for(i=y;i>=1;i--)
		if(x%i==0&&y%i==0)
		{
			z=i;
			break;
		}
	m=x/z;
	n=y/z;
	p=m*n*z;
	return(p);
}
