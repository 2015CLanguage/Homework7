#include<stdio.h>
#include<math.h>
float plug(int x,int n),p;
int x,n;
int main()
{
             printf("请输入x,n的值:");
             scanf("%d%d",&x,&n);
             printf("plug(%d,%d)=%3.2f\n",n,x,plug(n,x));
             return 0;
}
float plug(int x,int n)
{
             if(n==0)
             p=1;
             else if(n==1)
             p=x;
             else
             p=((2*n-1)*x-plug(n-1,x)-(n-1)*plug((n-2),x))/n;
            return p;
}
