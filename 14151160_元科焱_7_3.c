#include <stdio.h>
int main ()
{
	int A(int);
	int a;
	scanf("%d",&a);
	if (A(a))
	{
		printf("%d是素数\n",a);
	}
	else
	{
		printf("%d不是素数\n",a);
	}
	return 0;
}

int A(int a)
{
	int i,m,p=1;
		for(i=2;i<(a/2)&& p==1;i++)
		{
			m=(a%i);
			if (m==0)
				p=0;
            return (p);
		}
}

