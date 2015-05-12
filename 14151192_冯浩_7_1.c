#include<stdio.h>
int yue(int m,int n);
int bei(int m,int n);
int main()
{
	int x,y,A,B;
	printf("请输入两个正整数：x,y\n");
	scanf("%d,%d",&x,&y);
	A=yue(x,y);
	B=bei(x,y);
	printf("两正整数的公约数为：%d\n",A);
	printf("两正整数的公倍数为：%d\n",B);
	return 0;
}

int yue(int m,int n)
{	int M,N,Y,a;
	if(m==n)
		a=m;
	else
		{if(m>n)
			{M=m;
			 N=n;}
		 else
		 {M=n;
		  N=m;}
		}
	 Y=M%N;
	 while(Y!=0)
	 {
		M=N;
		N=Y;
		Y=M%N;
	 }
	 a=N;
	 return a;
}
int bei(int m,int n)
{
	int b;
	if(m==n)
		b=m*n;
	else
		b=m*n/yue(m,n);
	return b;

}
