Enter file contents here
#include<stdio.h>
int gys();
int gbs();
int gys(int m,int n)
{
int r,k;
if(m<n) 
{
k=m;
m=n;
n=k;
}
r=m%n;
while(r!=0)
{
m=n;
n=r;
r=m%n;
}
return n;
}
int gbs(int m,int n)
{
return (m*n/gys(m,n));
}
int main()
{
int m,n;
printf("input two number:");
    scanf("%d%d",&m,&n);
printf("m和n的最大公约数和最小公倍数是:\n%d  %d",gys(m,n),gbs(m,n));
return 0;


}
