#include<stdio.h>
#include<math.h>
int judge(int a)
{
	int i,k=1;
	for(i=2;i<a;i++)
	{
		if(a%i==0)k=0;break;
	}
	return k;
}
void main()
{
	int a;
	scanf("%d",&a);
	if(judge(a)==0)printf("它不是素数");
	else printf("它是素数");

}
