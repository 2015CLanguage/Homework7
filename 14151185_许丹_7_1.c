int gcd(int x, int y)
{
    int m,r;
    if(x<y)
    {
        m=x;
        x=y;
        y=m;
    }
    while((r=x%y)!=0)
    {
        x=y;
        y=r;
    }
    return (y);
}

int lcm(int x, int y,int z)
{
    int l;
    l=x*y/z;
    return l;
}

#include<stdio.h>
int main()
{
    int gcd(int x, int y);
    int lcm(int x, int y,int z);
    int a,b,c,d;
    printf("Please enter two integers that you want to check:");
    scanf("%d%d",&a,&b);
    c=gcd(a,b);
    d=lcm(a,b,c);
    printf("The greatest common divisor is:%d\n",c);
    printf("The least common multiple is:%d\n",d);
    return 0;
}

