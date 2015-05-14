#include<stdio.h>
#include<math.h>
float p,q;
void m(int a,int b,int c,float d)
{ 
 p=(-b+sqrt(d))/(2*a); 
 q=(-b-sqrt(d))/(2*a); 
 printf("x1=%.3f\n x2=%.3f",p,q);
}
void f(int a,int b,int c,float d)
{ 
 p=-b/(2*a); printf("x1=x2=%.4f\n",p);
}
void j(int a,int b,int c,float d)
{ 
 printf("方程无实根\n");
}
int main()
{ 
 int a,b,c; 
    float d;
 printf("请输入 a b c:\n");
 scanf("%d%d%d",&a,&b,&c);
 d=b*b-4.0*a*c;
 if(d>0) 
 { 
  m(a,b,c,d);
 }
 else if(d==0)
 { 
  f(a,b,c,d); 
    }
 else 
 { 
  j(a,b,c,d);
 } 
    printf("\n");
 return 0;
}
