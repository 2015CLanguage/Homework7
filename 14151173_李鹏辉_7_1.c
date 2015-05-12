#include<stdio.h>
int max(int x,int y)
{
	while(x!=y){
	     if(x>y) x=x-y;
		 else y=y-x;
	}
	return(x);
}
int min(int x,int y)
{
	int z;
	z=x*y/max(x,y);
	return(z);
}
void main()
{
	int m,n;
	puts("please input m:");
	scanf("%d",&m);
	puts("please input n:");
	scanf("%d",&n);
	puts("the result is:");
	printf("a=%d\n",max(m,n));
	printf("b=%d\n",min(m,n));	
}
