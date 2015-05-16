#include<stdio.h>
int judge_prime(int x)
{
	int i,z;
	for(i=2;i<x;i++){
		if(x%i==0){
			z=0;
		    break;
		}
		else
			z=1;
	}
	return z;
}
int main()
{
	int x;
	printf("Input a integer,please!\n");
	scanf("%d",&x);
	if(judge_prime(x))
		printf("%d is a prime number\n",x);
	else
		printf("%d is not a prime number\n",x);
	return 0;
}
