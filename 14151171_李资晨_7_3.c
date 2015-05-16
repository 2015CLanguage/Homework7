#include<stdio.h>
int main()
{
    int prime(int);
    int n;
    printf("input a number");
    scanf("%d",&n);
    if (prime(n))
        printf("%d 为素数.\n",n);
    else
        printf("%d 不为素数.\n",n);
    return 0;
}
int prime(int n)
{
    int f=1,i;
    for(i=2;i<=n/2&&f==1;i++)
        if(n%i==0)
        f=0;
    return (f);
}

