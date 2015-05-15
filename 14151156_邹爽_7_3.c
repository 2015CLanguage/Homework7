#include<stdio.h>
int main()
{
	int if_prime(int a);
	int a;
	scanf("%d",&a);
	if(if_prime(a))
	printf("%d is a prime.",a);
	else
	printf("%d is not a prime.",a);
	return 0; 
}

int if_prime(int a) 
{
	int i,flag=1;
	for(i=2;i<a/2&& flag==1;i++)
	if(a%i==0)
	flag=0;
	return flag;
}
