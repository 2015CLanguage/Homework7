#include<stdio.h>
float pn(int n,int x)
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
  int n,x;
  printf("输入 n,x:\n");
  scanf("%d%d",&n,&x);
  printf("P%d(%d)=%.2f\n",n,x,pn(n,x));
  return 0;

}
