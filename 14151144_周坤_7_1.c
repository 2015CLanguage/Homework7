# Homework7
#include<stdio.h>

int h(int m,int n);
int l(int m,int n);

void main()
{
    int m,n;
	printf("Please input two integers with a space as the separator\n");
	scanf("%d%d",&m,&n);
	if(m<n)
	{
	    int temp=n;
		n=m;
		m=temp;
	}
	printf("The highest common divisor is %d\n",h(m,n));
	printf("The lowest common multiple is %d\n",l(m,n));
}

int (int m,int n)
{
	int temp;
    while(n!=0)
	{
	    temp=m%n;
		m=n;
		n=temp;
	}
	return m;
}

int l(int m,int n)
{
	return m*n/hcd(m,n);
}
