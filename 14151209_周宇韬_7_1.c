#include <stdio.h>
int func1(int x,int y)
{
    int t,r;
    if (y>x)
    {
        t=x;
        x=y;
        y=t;
    }
    
    
    while ((r=x%y)!=0)
    {
        x=y;
        y=r;
    }

    return y;
}


int func2(int x,int y,int h)
{
    return (x*y/h);
}


int main()
{
    int func1(int x,int y);
    int func2(int x,int y,int h);
    int x,y,result1,result2;
    printf("请输入两个数:");
    scanf("%d,%d",&x,&y);
    result1=func1(x, y);
    result2=func2(x, y, result1);
    printf("最大公约数为%d\n",result1);
    printf("最小公倍数为%d\n",result2);
    return 0;
}
