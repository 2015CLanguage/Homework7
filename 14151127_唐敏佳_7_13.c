#include "stdio.h"
int le(int n,int x);
int main()
{
    int n,p,x;
    printf("请输入所求勒让德多项式的阶数n：\n");
    scanf("%d",&n);
    printf("输入未知数x：\n");
    scanf("%d",&x);

    p=le(n,x);
    printf("%d阶勒让德多项式的值为：%d",n,p);
    return 0;
}
int le(int n,int x)
{
    int p;
    if(n==0){p=1;}
    else if(n==1){p=x;}
    else{p=((2*n-1)*x-le(n-1,x)-(n-1)*le(n-2,x))/n;}
    return p;
}
