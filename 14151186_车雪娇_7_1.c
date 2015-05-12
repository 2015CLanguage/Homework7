#include<stdio.h>
int hcf(int,int);
int lcd(int,int,int);
int hcf(int u,int v);
int hcf(int u,int v)
{int t,r;
if(v>u)
{t=u;u=v;v=t;}
while((r=u%v)!=0)
{u=v;
v=r;}
return (v);
}
int lcd(int u,int v,int h)
{return(u*v/h);
}
int main()
{
int u,v,h,l;
scanf("%d,%d",&u,&v);
h=hcf(u,v);
printf("hcp=%d\n",h);
l=lcd(u,v,h);
printf("lcd=%d\n",l);
return 0;
}
