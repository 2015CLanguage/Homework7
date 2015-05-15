#include<stdio.h>
int main()
{
    int gcd(int m,int n);
    int lcm(int m,int n);
	int m,n;
	scanf("%d",&n);
	scanf("%d",&m);
	printf("最大公约数为%d\n",gcd(m,n));
	printf("最小公倍数为%d\n",lcm(m,n));
	return 0;
}
int gcd(int m,int n)
{
	int t,b;
	if(n<m)
	{
		t=n;
		n=m;
		m=t;
	}
	while(m!=0)
	{
	    b=n%m;
		n=m;
		m=b;
	}
	return n;
}
int lcm(int m,int n)
{

	return (m*n)/gcd(m,n);
}
