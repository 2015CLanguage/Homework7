#include<stdio.h>
int su(int a);
void main()
{
	int a;
	scanf("%d",&a);
	su(a);
}
int su(int a)
{
	int i;
    for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			printf("no");
			break;
		}
	}
	if(i==a)printf("yes");
	return 0;
}
