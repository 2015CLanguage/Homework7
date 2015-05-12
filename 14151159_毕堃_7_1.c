#include<stdio.h>
int gongyueshu(int x,int y);
int gongbeishu(int a,int b);
int main()
{
	int p,q;
	printf("请输入两个整数，中间用逗号隔开：\n");
	scanf("%d,%d",&p,&q);
	printf("这两个数的最大公约数是%d，最小公倍数是%d。",gongyueshu(p,q),gongbeishu(p,q));
	return 0;
}

int gongyueshu(int x,int y)
{
	int temp,m,i;
	if(x<y){  // x 大
		temp=x;
		x=y;
		y=temp;
	}
	for(i=1;i<=y;i++){
		if(x%i==0&&y%i==0){
			m=i;}
	}
	return m;
}

int gongbeishu(int a,int b)
{
	int temp,n,j;
	if(a<b){  // a 大
		temp=a;
		a=b;
		b=temp;
	}
	for(j=a*b;j>=b;j--){
		if(j%a==0&&j%b==0){
			n=j;
		}
	}
	return n;
}
