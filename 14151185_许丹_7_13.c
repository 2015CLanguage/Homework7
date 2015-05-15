#include<stdio.h>
float pn(int n,int x);

int main()
{
    int n,x;
    printf("Please input n and x:");
    scanf("%d%d",&n,&x);
    printf("n=%d,x=%d",n,x);
    printf("\nP%d(%d)=%6.2f",n,x,pn(n,x));
    return 0;
}

float pn(int n,int x)
{
    int y;
    if(n==0)
        y=1;
    else if(n==1)
        y=x;
    else
        y=(2*n-1)*x*pn(n-1,x)-(n-1)*pn(n-2,x)/n;
    return y;
}
