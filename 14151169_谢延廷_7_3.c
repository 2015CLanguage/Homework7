#include <stdio.h>
int pri(int n);

int main()
{int a;  
 scanf("a=%d",&a);
if (pri(a))
    printf("是");
else
    printf("不是");
return 0;
}



int pri(int n)
{int z,i;
if (n==2)
  z=1;
else 
for(i=2;i<n-1;i++)
if (n%i==0)
   {z=0;
   break;}
else
   z=1;
return z;
}
