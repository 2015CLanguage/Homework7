#include<stdio.h>
int main()
{
    int x,n;
    float p(int,int);
    printf("\n请输入n和x的数值：\n");
    scanf("%d,%d",&n,&x);
    printf("p%d(%d)=%6.2f\n",n,x,p(n,x));
    return 0;
}

float p(int n,int x)
{
    if(n==0)
        retun(1);
    else if(n==1);
        return(x);
    else
        return(2*n-1)*x*p((n-1),x)-(n-1)*p((n-2),x)/n;
}
