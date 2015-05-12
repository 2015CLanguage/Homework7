#include<stdio.h>
int main()
{
float p(int n,int x);
int n,x;
float w;
printf("input n,x:");
scanf("%d,%d",&n,&x);
w=p(n,x);
printf("P%d(%d) is %.2f\n",n,x,w);
return 0;
}
float p(int n,int x)
{
float a;
if(n==0)
return 1;
if(n==1)
return x;
if(n>1)
{
a=(2*n-1)*x-p(n-1,x)-(n-1)*p(n-2,x)/n;
return a;
}
}
