#include <stdio.H>
#include <math.h>
int prime(int m)
{
	int i,n;
	if(m==1)
	return 0;
	n=(int)sqrt((double)m);
	for(i=2;i<=n;i++)
	if(m%i==0)
	return 0; 
	return 1; 
}
void main()
{  
	int n; 
scanf("%d",&n); 
if(prime(n))  
printf("%d是一个素数.\n",n); 
else 
printf("%d不是一个素数.\n",n);
}
