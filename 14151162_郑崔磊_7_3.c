#include<stdio.h>
void whether_prime(int n);
void whether_prime(int n)
{ int p,i;
  p=0;
  for(i=2;i<n;i++)
  {
    if(n%i==0)
     p=1;
  }
  if (p==0)
  printf("你输入的数是素数");
  else
  printf("你输入的数不是素数");
}
int main()
{
  int n;
  printf("input a number:\n");
  scanf("%d",&n);
  whether_prime(n);
  return 0;
}
