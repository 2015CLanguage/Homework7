#include<stdio.h>
int check(int);

int main()//主函数接受输入，确定分支
{
	int n,m;
	printf("请输入一个整数\n");
	scanf("%d",&n);
	m=check(n);
	if(m==1)
		printf("该数是素数\n");
	else if(m==0)
		printf("该数不是素数\n");
	return 0;

}

int check(int k)//定义调用函数
{
	int m=1,i;
	for(i=1;i<k/2;i++);
		if(k%i==0)
			m=0;
	return m;

}
