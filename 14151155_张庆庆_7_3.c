#include<stdio.h>
#include<math.h>
int flag,i;
flag=1;
int PN(int a)
{
	for(i=2;i<a;i++)
	{
               if(a%i==0)
               flag=0;
	}
	return flag;
}
int main()
{
    int x,y;
    int PN(int a);
	printf("请输入一个整数：");
	scanf("%d",&x);
	y=PN(x);
	if(flag==1)
             printf("%d,为素数！\n",x);
	else
        printf("%d,不是素数！\n",x);
	return 0;
}
