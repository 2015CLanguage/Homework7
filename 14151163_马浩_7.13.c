#include<stdio.h>
float pn(int n,float x);
float pn(int n,float x)
{
   if(n==0)
     return (1);
   else if(n==1)
     return (x);
   else
     return ((2*n-1)*x-pn((n-1),x)-(n-1)*pn((n-2),x)/n);
}
int main()
{
  int n;
  float x,p;
  printf("input n,x:\n");
  scanf("%d%f",&n,&x);
  p=pn(n,x);
  printf("P%d(%f)=%6.2f\n",n,x,p);
  return 0;
}
