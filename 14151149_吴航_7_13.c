#include<stdio.h>
int main()
{int x,n;
 float m(int,int);
 printf("\n input n&x:");
 scanf("%d,%d",&n,&x);
 printf("n=%d,x=%d\n",n,x);
 printf("P%d(%d)=%6.2f\n",n,x,m(n,x));
 return 0;
}
float m(int n,int x)
{if(n==0)
return (1);
else if(n==1)
return(x);
else
return(2*n-1)*x*m((n-1),x)-(n-1)*m((n-2),x)/n;
}
