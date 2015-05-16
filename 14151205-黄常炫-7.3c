#include<stdio.h>
#include<math.h>
int prime_n(int n);
void main()
{
	int n;
	printf("请输入正整数n:\n");
    scanf("%d",&n);
	if(prime_n(n))
		  printf("%d是一个素数\n",n);
  else
	    printf("%d不是素数\n",n);
}
int prime_n(int n)
{
	int i,flag=1;
	for(i=2;i<=sqrt(n)&&flag==1;i++)
		if(n%i==0)
			flag=0;
  return flag;
}
