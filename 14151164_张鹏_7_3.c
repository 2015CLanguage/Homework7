#include<stdio.h>
int i,j=0,k;
int m(int a)
{
    for(i=2;i<a;i++)
   {
       k=a%i;
       if(k==0)
       {
       j=1;
       break;
       }
   }
   return j;
}
int main()
{
    int a,b;
    printf("输入一个数:");
    scanf("%d",&a);
    b=m(a);
    if(b==0)
    printf("%d素数:\n",a);
    else
    printf("%d不是:\n",a);
    return 0;
}
