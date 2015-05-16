#include<stdio.h>
int main()
{
    int x,i;
    double p(int,int);
    printf("输入x和i");
    scanf("%d,%d",&x,&i);
    printf("i=%d,x=%d\n",i,x);
    printf("P%d(%d)=%6.2f\n",i,x,p(i,x));
    return 0;

}
double p(int i,int x)
{
    if(i==0)
        return 1;
    else if(i==1)
        return (x);
    else
        return (2*i-1)*x*p((i-1),x)-(i-1)*p((i-2),x)/i;
}
