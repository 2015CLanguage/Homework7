#include <stdio.h>


int a,b;
int gcd(int a,int b)
{
	while (a%b)
	{
	  int t=a%b;
	  a=b;
	b=t;
	}
	return b;
}


int lcm(int a,int b)
{
    return (a*b/gcd(a,b));
}

int main()
{
	scanf("%d%d",&a,&b);
	printf("最大公约数为：%d\n",gcd(a,b));
	printf("最小公倍数为：%d\n",lcm(a,b));
	return 0;
}
