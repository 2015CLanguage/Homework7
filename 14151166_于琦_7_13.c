#include<stdio.h>
float function(int x,int n,float y)
{
    if(n==0)
        y=1;
    else if(n==1)
        y=x;
    else
        y=(float)((2*n-1)*x-function(x,(n-1),y)-(n-1)*function(x,(n-2),y))/n;
    return y;
}
void main()
{
    int x,n;
    float y=5;
    printf("x=");
    scanf("%d",&x);
    printf("n=");
    scanf("%d",&n);
    y=function(x,n,y);
    printf("%f\n",y);
}
