#include<stdio.h>
int max(int x,int y)
{
	int i,r=1;
	for(i=1;;i++){
	    r=x%y;
		if(r==0)
			break;
		else {
		    x=y;
			y=r;
		}
	}
	return y;
}
int min(int x,int y,int z)
{
    int m;
	m=x*y/z;
	return m;
}
int main()
{
    int r,x,y,c,d;
	printf("请输入两个整数");
	scanf("%d%d",&x,&y);
	if(x<y){
	    r=x;
		x=y;
		y=r;
	}
	c=max(x,y);
	d=min(x,y,c);
	printf("%d %d的最大公约数是%d\n",x,y,c);
	printf("%d %d的最小公倍数是%d\n",x,y,d);
	return 0;
}
