#include "stdio.h"
int main()
{
 int a;
printf("请输入一个整数：\n");
scanf("%d",&a);
if (prime(a))
printf("\n %d是素数.",a);
else
printf("\n %d不是素数.",a);
}
 
int prime(a) 
int a;
{
int flag=1,n;
for(n=2;n<a/2&&flag==1;n++)
if (a%n==0)
flag=0;
return(flag);

}
