#include <stdio.h>
int gongyueshu(int u,int v);
int gongbeishu(int u,int v,int h);
int main()
{int u,v,h,l;
scanf("a=%d,b=%d",&u,&v);
h=gongyueshu(u,v);
printf("最大公约数是=%d\n",h);
l=gongbeishu(u,v,h);
printf("最小公倍数=%d\n",l);
return 0;

}

int gongyueshu(int u,int v)
{int t,r;
if (v>u)  
    {t=u;u=v;v=t;}
while  ((r=u%v)!=0)
     {u=v;v=r;}
return(v);


}

int gongbeishu(int u,int v,int h)
          {return(u*v/h);
}
