#include<stdio.h>
int main()
{
	int gy(int a,int b);
	int gb(int a,int b);
	int a,b,c,d;
	printf("输入两个数a和b:");
	scanf("%d,%d",&a,&b);
	c=gy(a,b);
	d=gb(a,b);
	printf("最大公约数为%d,最小公倍数为%d",c,d);
 return 0;} 
 
 int gy(int a,int b)
 {
 	int t,m;
 	if(b>a){
 		t=a;
 		a=b;
 		b=t;
	 }
	 while((m=a%b)!=0){
	 	a=b;
	 	b=m;
	 }
	 return(b);
 }
 
 int gb(int a,int b)
 {
 	int gy(int a,int b);
 	int x,y;
 	x=gy(a,b);
 	y=a*b/x;
 	return(y);
 }
