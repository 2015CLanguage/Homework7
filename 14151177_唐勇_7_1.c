#include<stdio.h>
int main()
{
 int a,b,i,j,c;
 printf("请输入两个整数:\n");
 scanf("%d%d",&i,&j);
 if(i<j)
 {
  c=i;
  i=j;
  j=c;
 }
 a=i,b=j;
 while(b!=0)
 {
  c=a%b;
  a=b;
  b=c;
 }
 printf("最大公约数为：%d\n",a);
 printf("最小公倍数为：%d\n",i*j/a);
}
