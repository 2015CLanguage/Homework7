Enter file contents here
#include<stdio.h>
#include<math.h>
void dist_smaller_than_zero(float a,float b,float c);
void dist_larger_than_zero(float a,float b,float c);
void dist__equal_zero(float a,float b,float c);
void dist_smaller_than_zero(float a,float b,float c)
{  float p,q,dist;
   p=(-b)/(2*a);
   dist=(b*b)-(4*a*c);
   q=(sqrt(-dist))/(2*a);
   printf("x1=%7.2f+%7.2fi,x2=%7.2f-%7.2fi",p,q,p,q);
}
void dist_larger_than_zero(float a,float b,float c)
{
   float p,q,dist;
   p=(-b)/(2*a);
   dist=((b*b)-(4*a*c));
   q=sqrt(dist)/(2*a);
   printf("x1=%7.2f,x2=%7.2f",p+q,p-q);
}
void dist_equal_zero(float a,float b)
{
   float p;
   p=(-b)/(2*a);
   printf("x1=x2=%7.2f",p);
}
int main()
{  float a,b,c,dist;
   printf("input a,b,c:\n");
   scanf("%f%f%f",&a,&b,&c);
   dist=(b*b)-(4*a*c);
   if(dist>0)
   {
       dist_larger_than_zero(a,b,c);
   }
   else if(dist==0)
   {
       dist_equal_zero(a,b);
   }
   else
   {
       dist_smaller_than_zero(a,b,c);
   }
   return 0;
}
